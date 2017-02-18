/*
	File: fn_pulloutAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Pulls civilians out of a car if it's stopped.
*/
private["_crew"];
_curTarget = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_crew = crew _curTarget;

if((_curTarget distance player) > 5) exitWith {};
if((locked _curTarget == 2) && playerSide == civilian) exitWith {hint "Dieses Fahrzeug ist abgeschlossen"};

{
	if(side _x != west) then
	{
		_x setVariable ["transporting",false,true]; _x setVariable ["Escorting",false,true];
		[[_x],"life_fnc_pulloutVeh",_x,false] call life_fnc_MP;
	};
} foreach _crew;