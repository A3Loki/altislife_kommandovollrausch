/*
Fuegt einen 'Führerschein' hinzu, den man ueber scrollen Zivilisten zeigen kann
*/

private["_target", "_message","_rang"];

_target = cursorTarget;
_ue = "ü";

if(!license_civ_car) exitWith
{
	hint format ["Du beseitzt keinen Fuehrerschein!"];
};

if( isNull _target) then {_target = player;};

if( !(_target isKindOf "Man") ) then {_target = player;};

if( !(alive _target) ) then {_target = player;};

_message = format["<t size='1.5'>Fuehrerschein</t><br/>Name:<br/><t size='1.2'>%1</t><br/><t size='1.2'>Fuehrerschein gueltig</t><br/>", name player];

[[player, _message],"life_fnc_LappenShown",_target,false] spawn life_fnc_MP;
