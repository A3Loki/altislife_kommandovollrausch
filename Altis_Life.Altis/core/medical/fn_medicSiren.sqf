/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Start playing the siren for medics.
	
	*NOTE I DO NOT HAVE A SOUND FOR THIS BUT I"M LEAVING THE CODE HERE FOR OTHER PEOPLE TO ADD IT*.
*/
private["_veh"];
_veh = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_tone = [_this,1,"medyelp",[""]] call BIS_fnc_param;
_nap = [_this,2,4.7,[0]] call BIS_fnc_param;
if(isNull _veh) exitWith {};
if(isNil {_veh getVariable "siren4"}) exitWith {};
while {true} do
{
    if(!(_veh getVariable "siren4")) exitWith {};
    if(count (crew (_veh)) == 0) then {_veh setVariable["siren4",false,true]};
    if(!alive _veh) exitWith {};
    if(isNull _veh) exitWith {};
    _veh say3D _tone;
    uisleep _nap;
    if(!(_veh getVariable "siren4")) exitWith {};
};
 