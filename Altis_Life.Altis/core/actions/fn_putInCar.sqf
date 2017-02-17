/*
	File: fn_putInCar.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Finds the nearest vehicle and loads the target into the vehicle.
*/
private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit OR !isPlayer _unit) exitWith {};
if(player getVariable "restrained") exitWith {};
if(_unit (!(getVariable "restrained"))) exit with {hint "Die Person muss gefesselt sein!"};

_nearestVehicle = nearestObjects[getPosATL player,["Car","Ship","Submarine","Air"],3] select 0;
if(isNil "_nearestVehicle") exitWith {hint localize "STR_NOTF_VehicleNear"};


detach _unit;
[[_nearestVehicle],"life_fnc_moveIn",_unit,false] call life_fnc_MP;
_unit setVariable["Escorting",FALSE,TRUE];
_unit setVariable["transporting",TRUE,TRUE];