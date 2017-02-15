/*
	Author: Dillon "Itsyuka" Modine-Thuen
	File: fn_preCheckHouse.sqf
	Description: Checks to see if the house is owned (mainly for the purchase function)
*/
private["_query","_queryResult","_house","_housePos"];
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_player = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;

_housePos = getPosATL _house;


_query = ([format["housingCheckHouse:%1", _housePos], 2] call DB_fnc_asyncCall) select 0;
_valid = _player setVariable ["valid",_query];
