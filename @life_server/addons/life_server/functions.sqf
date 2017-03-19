#include "script_macros.hpp"
TON_fnc_index =
compileFinal "
	private[""_item"",""_stack""];
	_item = _this select 0;
	_stack = _this select 1;
	_return = -1;

	{
		if(_item in _x) exitWith {
			_return = _forEachIndex;
		};
	} foreach _stack;

	_return;
";

TON_fnc_player_query =
compileFinal "
	private[""_ret""];
	_ret = _this select 0;
	if(isNull _ret) exitWith {};
	if(isNil ""_ret"") exitWith {};
	
	[[life_atmbank,life_cash,owner player,player],""life_fnc_admininfo"",_ret,false] call life_fnc_MP;
";
publicVariable "TON_fnc_player_query";
publicVariable "TON_fnc_index";

TON_fnc_isnumber =
compileFinal "
	private[""_valid"",""_value"",""_compare""];
	_value = _this select 0;
	_valid = [""0"",""1"",""2"",""3"",""4"",""5"",""6"",""7"",""8"",""9""];
	_array = [_value] call KRON_StrToArray;
	_return = true;
	
	{
		if(_x in _valid) then	
		{}
		else
		{
			_return = false;
		};
	} foreach _array;
	_return;
";

publicVariable "TON_fnc_isnumber";

TON_fnc_clientGangKick =
compileFinal "
	private[""_unit"",""_group""];
	_unit = _this select 0;
	_group = _this select 1;
	if(isNil ""_unit"" OR isNil ""_group"") exitWith {};
	if(player == _unit && (group player) == _group) then
	{
		life_my_gang = ObjNull;
		[player] joinSilent (createGroup civilian);
		hint ""Man hat Dich aus der Partei entlassen."";
		
	};
";
publicVariable "TON_fnc_clientGangKick";

TON_fnc_clientGetKey =
compileFinal "
	private[""_vehicle"",""_unit"",""_giver""];
	_vehicle = _this select 0;
	_unit = _this select 1;
	_giver = _this select 2;
	if(isNil ""_unit"" OR isNil ""_giver"") exitWith {};
	if(player == _unit && !(_vehicle in life_vehicles)) then
	{
		_name = getText(configFile >> ""CfgVehicles"" >> (typeOf _vehicle) >> ""displayName"");
		hint format[""%1 hat Dir die Schlüssel für %2 gegeben."",_giver,_name];
		life_vehicles pushBack _vehicle;
		[[getPlayerUID player,playerSide,_vehicle,1],""TON_fnc_keyManagement"",false,false] call life_fnc_MP;
	};
";

publicVariable "TON_fnc_clientGetKey";

TON_fnc_clientGangLeader =
compileFinal "
	private[""_unit"",""_group""];
	_unit = _this select 0;
	_group = _this select 1;
	if(isNil ""_unit"" OR isNil ""_group"") exitWith {};
	if(player == _unit && (group player) == _group) then
	{
		player setRank ""COLONEL"";
		_group selectLeader _unit;
		hint ""Sie wurden zum Partei-Vorsitzenden ernannt."";
	};
";

publicVariable "TON_fnc_clientGangLeader";

//Cell Phone Messaging
/*
	-fnc_cell_textmsg
	-fnc_cell_textcop
	-fnc_cell_textadmin
	-fnc_cell_adminmsg
	-fnc_cell_adminmsgall
*/

/*********** ADMIN ***********/
KV_admin_uids = compileFinal "[""76561198077148178"",""76561197972350240""]";
KV_temp_banned_players = [];

KV_fnc_admin =
compileFinal "
    private[""_player"",""_admin"",""_admins""];
    _player = _this;
    _admins = call KV_admin_uids;
    _admin = if((getPlayerUID _player) in _admins) then {true} else {false};
    _admin;
";

KV_fnc_spawnObject =
compileFinal "
    private[""_unit"", ""_object"", ""_pos"", ""_dir"", ""_radius"", ""_special""];
    _object     = _this select 0;
    _pos        = _this select 1;
    _dir        = _this select 2;
    _radius     = _this select 3;
    _special    = _this select 4;
    _unit       = player;

    if(_unit call KV_fnc_admin) then {
        _create = createVehicle [_object, _pos, [], _radius, _special];
        _create setDir _dir;
        [""Object wurde erstellt.""] remoteExec [""KV_fnc_throwMsg"", _unit];
    };
";

KV_fnc_changePos =
compileFinal "
    private[""_unit"", ""_pos_target"", ""_type"", ""_dir"", ""_vehicle""];
    _pos_target = _this select 0;
    _type       = _this select 1;
    _vehicle    = _this select 2;
    _unit       = [player, vehicle player] select _vehicle;
    
    if(isPlayer _pos_target) then {_pos_target = getPos _pos_target};

    _dir        = getDir _unit;

    if(_unit call KV_fnc_admin) then {
        switch(_type) do {
            case ""tpto"": {
                _unit setPos _pos_target;
                _unit setDir _dir;
            };
            case ""tphere"": {
                _pos_target setPos (getPos _unit);
                _pos_target setDir _dir;
                [""Du wurdest zu einem Admin teleportiert.""] remoteExec [""KV_fnc_throwMsg"", _pos_target];
            };
            case ""tpall"": {
                _unit = getPosATL _unit;
                {
                    _x setPosATL _unit;
                    _x setDir _dir;
                    [""Du wurdest zu einem Admin teleportiert.""] remoteExec [""KV_fnc_throwMsg"", _x];
                } forEach _pos_target;
            };
        };
    };
";

KV_fnc_cleanVehicles =
compileFinal "
    private[""_unit""];
    _unit = player;

    if(_unit call KV_fnc_admin) then {
        {
            deleteVehicle _x;
        } forEach allDead;
        [""Alle zerstoerten Fahrzeuge wurden entfernt""] remoteExec [""KV_fnc_throwMsg"", _unit];
    };
";

KV_fnc_getFreeze =
compileFinal "
   private[""_unit"", ""_disabled""];
   _unit = _this;
   _disabled = if(userInputDisabled) then {true} else {false};
   _disabled;
";

KV_fnc_freezePlayer =
compileFinal "
    private[""_unit"", ""_target"", ""_freezed""];
    _target = _this select 0;
    _unit   = player;

    if(_unit call KV_fnc_admin) then {
        _freezed = _target call KV_fnc_getFreeze;
        if(!_freezed) then {
            {disableUserInput true;} remoteExec [""BIS_fnc_call"", _target];
            [""Du wurdest eingefroren.""] remoteExec [""KV_fnc_throwMsg"", _target];
        } else {
            {disableUserInput false;} remoteExec [""BIS_fnc_call"", _target];
            [""Du bist nun nicht mehr eingefroren.""] remoteExec [""KV_fnc_throwMsg"", _target];
        };
    };
";

KV_fnc_changeCash =
compileFinal "
    private[""_unit"", ""_target"", ""_cash"", ""_type""];
    _target = _this select 0;
    _cash   = _this select 1;
    _type   = _this select 2;
    _unit   = player;

    if(_unit call KV_fnc_admin) then {
        switch(_type) do {
            case ""add"": {
                [parseNumber _cash, {life_cash = life_cash + _this}] remoteExec [""BIS_fnc_call"", _target];
            };
            case ""sub"": {
                [parseNumber _cash, {life_cash = life_cash - _this}] remoteExec [""BIS_fnc_call"", _target];
            };
            case ""set"": {
                [parseNumber _cash, {life_cash = _this}] remoteExec [""BIS_fnc_call"", _target];
            };
        };
    };
";

KV_fnc_kickPlayer =
compileFinal "
    private[""_unit"", ""_target""];
    _target = _this select 0;
    _unit   = player;

    if(_unit call KV_fnc_admin) then {
        {[""Kicked"",FALSE,TRUE] call BIS_fnc_endMission;} remoteExec [""BIS_fnc_call"", _target];
    };
";

KV_fnc_banPlayer =
compileFinal "
    private[""_unit"", ""_target""];
    _target = _this select 0;
    _unit   = player;

    if(_unit call KV_fnc_admin) then {
        KV_temp_banned_players pushBack (getPlayerUID _target);
        {[""Banned"",FALSE,TRUE] call BIS_fnc_endMission;} remoteExec [""BIS_fnc_call"", _target];
    };
";

KV_fnc_throwMsg =
compileFinal "
    private[""_message""];
    _message = _this select 0;
    hint _message;
";

publicVariable "KV_admin_uids";
publicVariable "KV_temp_banned_players";
publicVariable "KV_fnc_admin";
publicVariable "KV_fnc_spawnObject";
publicVariable "KV_fnc_changePos";
publicVariable "KV_fnc_cleanVehicles";
publicVariable "KV_fnc_getFreeze";
publicVariable "KV_fnc_freezePlayer";
publicVariable "KV_fnc_changeCash";
publicVariable "KV_fnc_kickPlayer";
publicVariable "KV_fnc_banPLayer";
publicVariable "KV_fnc_throwMsg";
/*********** ADMIN ***********/

//To EMS
TON_fnc_cell_emsrequest = 
compileFinal "
private[""_msg"",""_to""];
	ctrlShow[3022,false];
	_msg = ctrlText 3003;
	_to = ""EMS Units"";
	if(_msg == """") exitWith {hint ""Du musst zum Senden eine Nachricht eingeben!"";ctrlShow[3022,true];};
		
	[[_msg,name player,5],""TON_fnc_clientMessage"",independent,false] call life_fnc_MP;
	[] call life_fnc_cellphone;
	hint format[""Du hast allen Ärzten folgende Nachricht gesendet: %1"",_msg];
	ctrlShow[3022,true];
";
//To One Person
TON_fnc_cell_textmsg =
compileFinal "
	private[""_msg"",""_to""];
	ctrlShow[3015,false];
	_msg = ctrlText 3003;
	if(lbCurSel 3004 == -1) exitWith {hint ""Du musst erst einen Spieler auswählen um eine Nachricht senden zu können.""; ctrlShow[3015,true];};
	_to = call compile format[""%1"",(lbData[3004,(lbCurSel 3004)])];
	if(isNull _to) exitWith {ctrlShow[3015,true];};
	if(isNil ""_to"") exitWith {ctrlShow[3015,true];};
	if(_msg == """") exitWith {hint ""Du musst zum Senden eine Nachricht eingeben!"";ctrlShow[3015,true];};
	
	[[_msg,name player,0],""TON_fnc_clientMessage"",_to,false] call life_fnc_MP;
	[] call life_fnc_cellphone;
	hint format[""Du hast %1 folgende Nachricht gesendet: %2"",name _to,_msg];
	ctrlShow[3015,true];
";
//To All Cops
TON_fnc_cell_textcop =
compileFinal "
	private[""_msg"",""_to""];
	ctrlShow[3016,false];
	_msg = ctrlText 3003;
	_to = ""The Police"";
	if(_msg == """") exitWith {hint ""Du musst zum Senden eine Nachricht eingeben!"";ctrlShow[3016,true];};
		
	[[_msg,name player,1],""TON_fnc_clientMessage"",true,false] call life_fnc_MP;
	[] call life_fnc_cellphone;
	hint format[""Du hast allen Polizisten folgende Nachricht gesendet: %1"",_msg];
	ctrlShow[3016,true];
";
//To All Admins
TON_fnc_cell_textadmin =
compileFinal "
	private[""_msg"",""_to"",""_from""];
	ctrlShow[3017,false];
	_msg = ctrlText 3003;
	_to = ""The Admins"";
	if(_msg == """") exitWith {hint ""Du musst zum Senden eine Nachricht eingeben!"";ctrlShow[3017,true];};
		
	[[_msg,name player,2],""TON_fnc_clientMessage"",true,false] call life_fnc_MP;
	[] call life_fnc_cellphone;
	hint format[""Du hast allen Administratoren folgende Nachricht gesendet: %1"",_msg];
	ctrlShow[3017,true];
";
//Admin To One Person
TON_fnc_cell_adminmsg =
compileFinal "
	if(isServer) exitWith {};
	if((call life_adminlevel) < 1) exitWith {hint ""Du bist kein Administrator!"";};
	private[""_msg"",""_to""];
	_msg = ctrlText 3003;
	_to = call compile format[""%1"",(lbData[3004,(lbCurSel 3004)])];
	if(isNull _to) exitWith {};
	if(_msg == """") exitWith {hint ""Du musst zum Senden eine Nachricht eingeben!"";};
	
	[[_msg,name player,3],""TON_fnc_clientMessage"",_to,false] call life_fnc_MP;
	[] call life_fnc_cellphone;
	hint format[""Admin Nachricht gesendet an: %1 Nachricht: %2"",name _to,_msg];
";

TON_fnc_cell_adminmsgall =
compileFinal "
	if(isServer) exitWith {};
	if((call life_adminlevel) < 1) exitWith {hint ""Du bist kein Administrator!"";};
	private[""_msg"",""_from""];
	_msg = ctrlText 3003;
	if(_msg == """") exitWith {hint ""Du musst zum Senden eine Nachricht eingeben!"";};
	
	[[_msg,name player,4],""TON_fnc_clientMessage"",true,false] call life_fnc_MP;
	[] call life_fnc_cellphone;
	hint format[""Du hast an alle Spieler folgende Admin-Nachricht gesandt: %1"",_msg];
";

publicVariable "TON_fnc_cell_textmsg";
publicVariable "TON_fnc_cell_textcop";
publicVariable "TON_fnc_cell_textadmin";
publicVariable "TON_fnc_cell_adminmsg";
publicVariable "TON_fnc_cell_adminmsgall";
publicVariable "TON_fnc_cell_emsrequest";
//Client Message
/*
	0 = private message
	1 = police message
	2 = message to admin
	3 = message from admin
	4 = admin message to all
*/
TON_fnc_clientMessage =
compileFinal "
	if(isServer) exitWith {};
	private[""_msg"",""_from"", ""_type""];
	_msg = _this select 0;
	_from = _this select 1;
	_type = _this select 2;
	if(_from == """") exitWith {};
	switch (_type) do
	{
		case 0 :
		{
			private[""_message""];
			_message = format["">>>NACHRICHT VON %1: %2"",_from,_msg];
			hint parseText format [""<t color='#FFCC00'><t size='2'><t align='center'>Neue Nachricht<br/><br/><t color='#33CC33'><t align='left'><t size='1'>An: <t color='#ffffff'>Dich<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2"",_from,_msg];
			
			[""TextMessage"",[format[""Eingehende Nachricht von %1"",_from]]] call bis_fnc_showNotification;
			systemChat _message;
		};
		
		case 1 :
		{
			if(side player != west) exitWith {};
			private[""_message""];
			_message = format[""---Polizeinachricht von %1: %2"",_from,_msg];
			hint parseText format [""<t color='#316dff'><t size='2'><t align='center'>Neue Nachricht<br/><br/><t color='#33CC33'><t align='left'><t size='1'>An: <t color='#ffffff'>Alle Polizisten<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2"",_from,_msg];
			
			[""Polizeibericht"",[format[""Ein neuer Polizeibericht von: %1"",_from]]] call bis_fnc_showNotification;
			systemChat _message;
		};
		
		case 2 :
		{
			if((call life_adminlevel) < 1) exitWith {};
			private[""_message""];
			_message = format[""???ADMIN ANFRAGE VON %1: %2"",_from,_msg];
			hint parseText format [""<t color='#ffcefe'><t size='2'><t align='center'>Admin Anfrage<br/><br/><t color='#33CC33'><t align='left'><t size='1'>An: <t color='#ffffff'>Admins<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2"",_from,_msg];
			
			[""Adminbericht"",[format[""%1 hat einen Admin benachrichtigt!"",_from]]] call bis_fnc_showNotification;
			systemChat _message;
		};
		
		case 3 :
		{
			private[""_message""];
			_message = format[""!!!ADMIN NACHRICHT: %1"",_msg];
			_admin = format[""Gesendet von Admin: %1"", _from];
			hint parseText format [""<t color='#FF0000'><t size='2'><t align='center'>Admin Nachricht<br/><br/><t color='#33CC33'><t align='left'><t size='1'>An: <t color='#ffffff'>Dich<br/><t color='#33CC33'>Von: <t color='#ffffff'>Einem Admin<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%1"",_msg];
			
			[""AdminMessage"",[""Du hast eine Nachricht von einem Admin empfangen!""]] call bis_fnc_showNotification;
			systemChat _message;
			if((call life_adminlevel) > 0) then {systemChat _admin;};
		};
		
		case 4 :
		{
			private[""_message"",""_admin""];
			_message = format[""!!!ADMIN MESSAGE: %1"",_msg];
			_admin = format[""Gesendet von Admin: %1"", _from];
			hint parseText format [""<t color='#FF0000'><t size='2'><t align='center'>Admin Nachricht<br/><br/><t color='#33CC33'><t align='left'><t size='1'>An: <t color='#ffffff'>Alle Spieler<br/><t color='#33CC33'>Von: <t color='#ffffff'>Den Admins<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%1"",_msg];
			
			[""AdminMessage"",[""Du hast eine Nachricht von einem Admin empfangen!""]] call bis_fnc_showNotification;
			systemChat _message;
			if((call life_adminlevel) > 0) then {systemChat _admin;};
		};
		
		case 5: {
			private[""_message""];
			_message = format[""!!!ÄRZTLICHE NACHFRAGE: %1"",_msg];
			hint parseText format [""<t color='#FFCC00'><t size='2'><t align='center'>Ärztliche Nachfrage<br/><br/><t color='#33CC33'><t align='left'><t size='1'>An: <t color='#ffffff'>Dich<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2"",_from,_msg];
			
			[""TextMessage"",[format[""Ärztliche Nachfrage von %1"",_from]]] call bis_fnc_showNotification;
		};
	};
";
publicVariable "TON_fnc_clientMessage";
