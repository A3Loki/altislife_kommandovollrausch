/*
	File: fn_copSiren.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the cop siren sound for other players
*/
private["_veh"];
_veh = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_tone = [_this,1,"SirenLong",[""]] call BIS_fnc_param;
_nap = [_this,2,5.2,[0]] call BIS_fnc_param;
if(isNull _veh) exitWith {};
if(isNil {_veh getVariable "siren"}) exitWith {};
while {true} do
{
    if(!(_veh getVariable "siren")) exitWith {};
    if(count (crew (_veh)) == 0) then {_veh setVariable["siren",false,true]};
    if(!alive _veh) exitWith {};
    if(isNull _veh) exitWith {};
    _veh say3D _tone;
    uisleep _nap;
    if(!(_veh getVariable "siren")) exitWith {};
};
 