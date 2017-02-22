#include <macro.h>
/*
	File: fn_keyHandler.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys"];
_ctrl = SEL(_this,0);
_code = SEL(_this,1);
_shift = SEL(_this,2);
_ctrlKey = SEL(_this,3);
_alt = SEL(_this,4);
_speed = speed cursorTarget;
_handled = false;

_interactionKey = if((EQUAL(count (actionKeys "User10"),0))) then {219} else {(actionKeys "User10") select 0};
_mapKey = SEL(actionKeys "ShowMap",0);
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

//Vault handling...
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute")) && {(player GVAR ["restrained",false])}) exitWith {
	true;
};

if(life_action_inUse) exitWith {
	if(!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
	_handled;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if(!(EQUAL(count (actionKeys "User10"),0)) && {(inputAction "User10" > 0)}) exitWith {
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	if(!life_action_inUse) then {
		[] spawn {
			private "_handle";
			_handle = [] spawn life_fnc_actionKeyHandler;
			waitUntil {scriptDone _handle};
			life_action_inUse = false;
		};
	};
	true;
};

switch (_code) do {
	//Space key for Jumping
	case 57: {
		if(isNil "jumpActionTime") then {jumpActionTime = 0;};
		if(_shift && {!(EQUAL(animationState player,"AovrPercMrunSrasWrflDf"))} && {isTouchingGround player} && {EQUAL(stance player,"STAND")} && {speed player > 2} && {!life_is_arrested} && {SEL((velocity player),2) < 2.5} && {time - jumpActionTime > 1.5}) then {
			jumpActionTime = time; //Update the time.
			[player,true] spawn life_fnc_jumpFnc; //Local execution
			[[player,false],"life_fnc_jumpFnc",nil,FALSE] call life_fnc_MP; //Global execution
			_handled = true;
		};
	};

	//Map Key
	case _mapKey: {
		switch (playerSide) do {
			case west: {if(!visibleMap) then {[] spawn life_fnc_copMarkers;}};
			case independent: {if(!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
			case civilian: {if(!visibleMap) then {[] spawn life_fnc_civMarker;}};
		};
	};

	//Holster / recall weapon.
	case 35: {
		if(_shift && !_ctrlKey && !(EQUAL(currentWeapon player,""))) then {
			life_curWep_h = currentWeapon player;
			player action ["SwitchWeapon", player, player, 100];
			player switchCamera cameraView;
		};

		if(!_shift && _ctrlKey && !isNil "life_curWep_h" && {!(EQUAL(life_curWep_h,""))}) then {
			if(life_curWep_h in [RIFLE,LAUNCHER,PISTOL]) then {
				player selectWeapon life_curWep_h;
			};
		};
	};

	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	case _interactionKey: {
		if(!life_action_inUse) then {
			[] spawn  {
				private "_handle";
				_handle = [] spawn life_fnc_actionKeyHandler;
				waitUntil {scriptDone _handle};
				life_action_inUse = false;
			};
		};
	};

	//F1 = Faded Sound
	case 59:
	{
		[] call life_fnc_fadeSound;
		_handled = true;
	};

	//Restraining (Shift + R)
	case 19:
	{
		if(_shift) then {_handled = true;};
		if(_shift && playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && (side cursorTarget == civilian) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget GVAR "Escorting") && !(cursorTarget GVAR "restrained") && speed cursorTarget < 1) then
		{
			[false] call life_fnc_restrainAction;
		};

		if(_shift && (animationState cursorTarget) == "Incapacitated" && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget GVAR "Escorting") && !(cursorTarget GVAR "restrained") && speed cursorTarget < 1) then
		{
			[true] call life_fnc_restrainAction;
		};
	};

	//Shift + G Niederschlagen
	case 34:
	{
	    if(_shift) then {_handled = true;};

	    //Robbing
        if(_shift && playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget && alive cursorTarget && cursorTarget distance player < 4 && speed cursorTarget < 1) then
        {
            if((animationState cursorTarget) != "Incapacitated" && (currentWeapon player == RIFLE OR currentWeapon player == PISTOL) && currentWeapon player != "" && !life_knockout && !(player GVAR["restrained",false]) && !life_istazed && !(player GVAR["surrender",false])) then
            {
                [cursorTarget] spawn life_fnc_knockoutAction;
            };
            _handled = true;
        };
	};

	//Num1
	case 79:
	{
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player == player)) then
		{
			cutText [format["Taekwondo"], "PLAIN DOWN"];
			player playMove "AmovPercMstpSnonWnonDnon_exerciseKata";
		};

		if (_shift && playerSide == west  && !(life_siren_piercer_active) && vehicle player != player && ((driver vehicle player) == player)) then
        {
            _veh = vehicle player;
            [[_veh,"piercer"],"life_fnc_globalSound",true,false] spawn life_fnc_MP;
            [] spawn
            {
                life_siren_piercer_active = true;
                sleep 5;
                life_siren_piercer_active = false;
            };
            _handled = true;
        };
	};

	//Num2
	case 80:
	{
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player == player)) then
		{
			cutText [format["Kniebeuge"], "PLAIN DOWN"];
			player playMove "AmovPercMstpSnonWnonDnon_exercisekneeBendA";
		};

		if(_shift) then
		{
		    _veh = vehicle player;
            if(playerSide == west && _veh != player && !life_siren_active && ((driver _veh) == player)) then
            {
                [] spawn
                {
                    life_siren_active = true;
                    uiSleep 25; // 25.2
                    life_siren_active = false;
                };
                if(isNil {_veh getVariable "siren"}) then {_veh setVariable["siren",false,true];};
                if((_veh getVariable "siren")) then
                {
                    titleText [localize "STR_MISC_SirensOFF","PLAIN"];
                    _veh setVariable["siren",false,true];
                } else {
                    titleText [localize "STR_MISC_SirensON","PLAIN"];
                    _veh setVariable["siren",true,true];
                    [[_veh, "Siren_Long_2", 25],"life_fnc_copSiren",nil,true] spawn life_fnc_MP;
                };
            };
		}
	};

	//Num3
	case 81:
	{
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player == player)) then
		{
			cutText [format["Hastige Kniebeuge"], "PLAIN DOWN"];
			player playMove "AmovPercMstpSnonWnonDnon_exercisekneeBendB";
		};

		if(_shift) then
        {
            _veh = vehicle player;
            if(playerSide == west && _veh != player && !life_siren_active && ((driver _veh) == player)) then
            {
                [] spawn
                {
                    life_siren_active = true;
                    uiSleep 27.1;
                    life_siren_active = false;
                };
                if(isNil {_veh getVariable "siren"}) then {_veh setVariable["siren",false,true];};
                if((_veh getVariable "siren")) then
                {
                    titleText [localize "STR_MISC_SirensOFF","PLAIN"];
                    _veh setVariable["siren",false,true];
                } else {
                    titleText [localize "STR_MISC_SirensON","PLAIN"];
                    _veh setVariable["siren",true,true];
                    [[_veh, "Siren_Long_3", 27.1],"life_fnc_copSiren",nil,true] spawn life_fnc_MP;
                };
            };
        }
	};

	//Num4
	case 75:
	{
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player == player)) then
		{
			cutText [format["Liegestütze"], "PLAIN DOWN"];
			player playMove "AmovPercMstpSnonWnonDnon_exercisePushup";
		};
	};

    //Num5
	case 76:
	{
			if(_shift) then {_handled = true;};
			if((_shift) && (vehicle player == player)) then
	        {
                [] spawn {
                    player playMove "Acts_AidlPercMstpSlowWrflDnon_pissing";
                    [player,"piss"] call life_fnc_globalSound;
                    sleep 8;
                    _pipi = "Oil_Spill_F" createVehicle (getPos player);
                    _pipi setPos (getPos player);
                    sleep 120;
                    deleteVehicle _pipi;
                };
	        };
    };

    //Num6
    /*case 77:
    {
        if(_shift) then {_handled = true;};
        if ((_shift) && (vehicle player == player)) then
        {
            cutText [format["Einweisen"], "PLAIN DOWN"];
            player playMove "Acts_ShowingTheRightWay_loop";
        };
    };*/

	//T Key (Trunk)
	case 20: {
		if(_shift) then {_handled = true;};
		if (_shift) then
        {
            if (vehicle player == player && !(player GVAR ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed) then
            {
                if (player GVAR ["surrender", false]) then
                {
                    player SVAR ["surrender", false, true];
                } else
                {
                    [] spawn life_fnc_surrender;
                };
            };
        };

		if(!_alt && !_ctrlKey && !life_is_processing) then {
			if(vehicle player != player && alive vehicle player) then {
				if((vehicle player) in life_vehicles) then {
					[vehicle player] call life_fnc_openInventory;
				};
			} else {
				private "_list";
				_list = ["landVehicle","Air","Ship","House_F"];
				if(KINDOF_ARRAY(cursorTarget,_list) && {player distance cursorTarget < 7} && {vehicle player == player} && {alive cursorTarget}) then {
					if(cursorTarget in life_vehicles OR {!(cursorTarget GVAR ["locked",true])}) then {
						[cursorTarget] call life_fnc_openInventory;
					};
				};
			};
		};
	};

    //E Sirene Takedown Weapon
	case 18:
	{
		if(_shift && playerSide == west  && !(life_siren4_active) && vehicle player != player && ((driver vehicle player) == player)) then
		{
			_veh = vehicle player;
			[[_veh,"takedown_weapon"],"life_fnc_globalSound",true,false] spawn life_fnc_MP;
			[] spawn
			{
				life_siren4_active = true;
				sleep 4.2;
				life_siren4_active = false;
			};
			_handled = true;
		};

        if(!isNil {vehicle player getVariable "blinkerRight"} && vehicle player != player && !_shift) then {
            if (!(vehicle player getVariable "blinkerRight")) then {
                [player, 1] spawn life_fnc_blinker;
            } else {
                vehicle player setVariable ["blinkerRight", false, true];
            };
        };
	};

    // B
	case 48:
    {
        if(!isNil {vehicle player getVariable "blinkerWarn"} && vehicle player != player && !_shift) then {
            if (!(vehicle player getVariable "blinkerWarn")) then {
                [player, 2] spawn life_fnc_blinker;
            } else {
                vehicle player setVariable ["blinkerWarn", false, true];
            };
        };
    };

    //C Sirene Follow Vehicle
	case 46:
	{
		if(_shift && playerSide == west && !(life_siren5_active) && vehicle player != player && ((driver vehicle player) == player)) then
		{
			_veh = vehicle player;
			[[_veh,"follow"],"life_fnc_globalSound",true,false] spawn life_fnc_MP;
			[] spawn
			{
				life_siren5_active = true;
				sleep 4.5;
				life_siren5_active = false;
			};
			_handled = true;
		};
	};

	case 16:
	{
		if(_shift && playerSide == west && !(life_siren2_active) && vehicle player != player && ((driver vehicle player) == player)) then
		{
			_veh = vehicle player;
			[[_veh,"stop_car"],"life_fnc_globalSound",true,false] spawn life_fnc_MP;
			[] spawn
			{
				life_siren2_active = true;
				sleep 3.5;
				life_siren2_active = false;
			};
			_handled = true;
		};

		if(!isNil {vehicle player getVariable "blinkerLeft"} && vehicle player != player && !_shift) then {
            if (!(vehicle player getVariable "blinkerLeft")) then {
                [player, 0] spawn life_fnc_blinker;
            } else {
                vehicle player setVariable ["blinkerLeft", false, true];
            };
        };
	};

	case 24:
	{
		if (!_shift && !_alt && !_ctrlKey && (playerSide == west) && (vehicle player != player)) then {
			[] call life_fnc_copOpener;
		};
	};

	//NEW ONE
    //L Key?
    case 38: {
        //If cop run checks for turning lights on.
        if(!isNil {vehicle player getVariable "lights"} && vehicle player != player && _shift) then {
            if (!(vehicle player getVariable "lights")) then {
                [vehicle player, player] spawn life_fnc_emergencyLights;
            } else {
                vehicle player setVariable ["lights", false, true];
            };
        };

        if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };
    };

	case 41: {

		if (!_alt && !_ctrlKey && playerSide == west) then
		{
			[] call life_fnc_radar;
		};
	};

	//Y Player Menu
	case 21: {
		if(!_alt && !_ctrlKey && !dialog && !life_is_processing) then {
			[] call life_fnc_p_openMenu;
		};
	};

	case 33: //F Key = Sirens
    {
        if (!_shift && !_alt && !_ctrlKey) then //F Key = EMS/Cops Sirens
        {
            _veh = vehicle player;
            if(playerSide in [west,independent] && _veh != player && !life_siren_active && ((driver _veh) == player)) then
            {
                [] spawn
                {
                    life_siren_active = true;
                    if(playerSide == west) then {uiSleep 15.1;}
                    else {uiSleep 4.4;};
                    life_siren_active = false;
                };
                if(isNil {_veh getVariable "siren"}) then {_veh setVariable["siren",false,true];};
                if((_veh getVariable "siren")) then
                {
                    titleText [localize "STR_MISC_SirensOFF","PLAIN"];
                    _veh setVariable["siren",false,true];
                } else {
                    titleText [localize "STR_MISC_SirensON","PLAIN"];
                    _veh setVariable["siren",true,true];
                    if(playerSide == west) then {
                        [[_veh],"life_fnc_copSiren",nil,true] spawn life_fnc_MP;
                    } else {
                        [[_veh],"life_fnc_medicSiren2",nil,true] spawn life_fnc_MP;
                    };
                };
            };
        };
		if(_shift && playerSide == west && !(life_yelp_active) && vehicle player != player && ((driver vehicle player) == player)) then
		{
			_veh = vehicle player;
			[[_veh,"Yelp"],"life_fnc_globalSound",true,false] spawn life_fnc_MP;
			[] spawn
			{
				life_Yelp_active = true;
				sleep 3.5;
				life_Yelp_active = false;
			};
			_handled = true;
		};
		//medyelp new
		if(_shift && playerSide == independent && !(life_medyelp_active) && vehicle player != player && ((driver vehicle player) == player)) then
		{
			_veh = vehicle player;
			[[_veh,"medyelp"],"life_fnc_globalSound",true,false] spawn life_fnc_MP;
			[] spawn
			{
				life_medyelpelp_active = true;
				sleep 3.5;
				life_medyelp_active = false;
			};
			_handled = true;
		};
	};
		/*
		//Medic siren Shift+F (yelp)
		if(_shift) then
            {
                if(playerSide == independent && vehicle player != player && !life_siren4_active && ((driver vehicle player) == player)) then
                {
                    [] spawn
                    {
                        life_siren4_active = true;
                        sleep 1.2;
                        life_siren4_active = false;
                    };
                    _veh = vehicle player;
                    if(isNil {_veh getVariable "siren4"}) then {_veh setVariable["siren4",false,true];};
                    if((_veh getVariable "siren4")) then
                    {
                        titleText ["Signal aus","PLAIN"];
                        _veh setVariable["siren4",false,true];
                    }
                        else
                    {
                        titleText ["Signal an","PLAIN"];
                        _veh setVariable["siren4",true,true];
                        [[_veh],"life_fnc_medicSiren",nil,true] spawn life_fnc_MP;
                    };
                };
            };
		};
		*/
	//U Key
	case 22:
	{
		if(!_alt && !_ctrlKey) then {
			if(vehicle player == player) then {
				_veh = cursorTarget;
			} else {
				_veh = vehicle player;
			};

			if(_veh isKindOf "House_F" && playerSide == civilian) then {
				if(_veh in life_vehicles && player distance _veh < 8) then {
					_door = [_veh] call life_fnc_nearestDoor;
					if(EQUAL(_door,0)) exitWith {hint "Du bist nicht in der Nähe einer Tür!"};
					_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];
					if (EQUAL(_locked,0)) then {
						_veh SVAR[format["bis_disabled_Door_%1",_door],1,true];
						_veh animate [format["door_%1_rot",_door],0];
						hint composeText [ image "icons\lock.paa", "  Tür abgeschlossen" ];
					} else {
						_veh SVAR[format["bis_disabled_Door_%1",_door],0,true];
						_veh animate [format["door_%1_rot",_door],1];
						hint composeText [ image "icons\unlock.paa", "  Tür aufgeschlossen" ];
					};
				};
			} else {
				_locked = locked _veh;

			if(_veh in life_vehicles && player distance _veh < 8) then
			{
				if(_locked == 2) then
				{
					if(local _veh) then
					{
						_veh lock 0;
						_veh animateDoor ["door_back_R",1];
						_veh animateDoor ["door_back_L",1];
        					_veh animateDoor ['door_R',1];
        					_veh animateDoor ['door_L',1];
        					_veh animateDoor ['Door_rear',1];
        					_veh animateDoor ['Door_LM',1];
        					_veh animateDoor ['Door_RM',1];
        					_veh animateDoor ['Door_LF',1];
        					_veh animateDoor ['Door_RF',1];
        					_veh animateDoor ['Door_LB',1];
        					_veh animateDoor ['Door_RB',1];
					}
						else
					{
						[[_veh,0], "life_fnc_lockVehicle",_veh,false] spawn life_fnc_MP;
						_veh animateDoor ["door_back_R",1];
						_veh animateDoor ["door_back_L",1];
        					_veh animateDoor ['door_R',1];
        					_veh animateDoor ['door_L',1];
        					_veh animateDoor ['Door_rear',1];
        					_veh animateDoor ['Door_LM',1];
        					_veh animateDoor ['Door_RM',1];
        					_veh animateDoor ['Door_LF',1];
        					_veh animateDoor ['Door_RF',1];
        					_veh animateDoor ['Door_LB',1];
        					_veh animateDoor ['Door_RB',1];
					};
					hint composeText [ image "icons\unlock.paa", "  Fahrzeug aufgeschlossen" ];
					player say3D "unlock";

				}
					else
				{
					if(local _veh) then
					{
						_veh lock 2;
						_veh animateDoor ["door_back_R",0];
						_veh animateDoor ["door_back_L",0];
        					_veh animateDoor ['door_R',0];
        					_veh animateDoor ['door_L',0];
        					_veh animateDoor ['Door_rear',0];
        					_veh animateDoor ['Door_LM',0];
        					_veh animateDoor ['Door_RM',0];
        					_veh animateDoor ['Door_LF',0];
        					_veh animateDoor ['Door_RF',0];
        					_veh animateDoor ['Door_LB',0];
        					_veh animateDoor ['Door_RB',0];

					}
						else
					{
						[[_veh,2], "life_fnc_lockVehicle",_veh,false] spawn life_fnc_MP;
						_veh animateDoor ["door_back_R",0];
						_veh animateDoor ["door_back_L",0];
        					_veh animateDoor ['door_R',0];
        					_veh animateDoor ['door_L',0];
        					_veh animateDoor ['Door_rear',0];
        					_veh animateDoor ['Door_LM',0];
        					_veh animateDoor ['Door_RM',0];
        					_veh animateDoor ['Door_LF',0];
        					_veh animateDoor ['Door_RF',0];
        					_veh animateDoor ['Door_LB',0];
        					_veh animateDoor ['Door_RB',0];
					};

					hint composeText [ image "icons\lock.paa", "  Fahrzeug abgeschlossen" ];
					player say3D "car_lock";


					};
				};
			};
		};
	};
};

_handled;
