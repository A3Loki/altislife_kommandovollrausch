/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Queries to see if the player belongs to any gang.
*/
private["_query","_queryResult"];

_query = format["gangInfo:%2%1%2",_this,"%"];

_queryResult = [_query,2,true] call DB_fnc_asyncCall;

if(count _queryResult > 0) then {
	missionNamespace setVariable[format["gang_%1",_this],_queryResult select 0];
}else{
	missionNamespace setVariable[format["gang_%1",_this],_queryResult];
};