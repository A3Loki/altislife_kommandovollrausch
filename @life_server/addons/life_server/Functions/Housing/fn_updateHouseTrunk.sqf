/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Updates the storage for a house blah blah
*/
private["_house"];
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _house) exitWith {};

_trunkData = _house getVariable["Trunk",[[],0]];
_houseID = _house getVariable["house_id",-1];

if(_houseID == -1) exitWith {}; //Dafuq?

_query = format["housingUpdateInventory:%1:%2",_trunkData,_houseID];

[_query,1] call DB_fnc_asyncCall;