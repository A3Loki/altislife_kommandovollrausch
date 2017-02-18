/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the target.
*/
private["_unit", "_cop", "_cableties"];
_unit = cursorTarget;
_cop = if(side player == west) then {true} else {false};
_cableties = [_this,0,false] call BIS_fnc_param;
if(isNull _unit) exitWith {}; //Not valid
if((player distance _unit > 3)) exitWith {};
if((_unit getVariable "restrained")) exitWith {};
if(_cop && side _unit == west) exitWith {};
if(_cableties && (life_inv_cableties < 1) && !_cop) exitWith {hint "Du hast keine Kabelbinder"};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};

[[_unit,"handcuffs"],"life_fnc_globalSound",true,false] spawn life_fnc_MP;

if(_cableties && !_cop) then {
  [false,"cableties",1] call life_fnc_handleInv; };
_unit setVariable["restrained",true,true];
[[player], "life_fnc_restrain", _unit, false] call life_fnc_MP;
//[[0,"STR_NOTF_Restrained",true,[_unit getVariable["realname", name _unit], profileName]],"life_fnc_broadcast",west,false] call life_fnc_MP;
