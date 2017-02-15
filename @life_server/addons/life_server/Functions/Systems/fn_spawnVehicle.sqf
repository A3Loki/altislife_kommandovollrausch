#include "\life_server\script_macros.hpp"
/*
	File: fn_spawnVehicle.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Sends the query request to the database, if an array is returned then it creates
	the vehicle if it's not in use or dead.
*/
private["_vid","_sp","_pid","_query","_sql","_vehicle","_nearVehicles","_name","_side","_tickTime","_dir","_servIndex"];
_vid = [_this,0,-1,[0]] call BIS_fnc_param;
_pid = [_this,1,"",[""]] call BIS_fnc_param;
_sp = [_this,2,[],[[],""]] call BIS_fnc_param;
_unit = [_this,3,ObjNull,[ObjNull]] call BIS_fnc_param;
_price = [_this,4,0,[0]] call BIS_fnc_param;
_dir = [_this,5,0,[0]] call BIS_fnc_param;
_unit_return = _unit;
_name = name _unit;
_side = side _unit;
_unit = owner _unit;

if(EQUAL(_vid,-1) OR EQUAL(_pid,"")) exitWith {};
if(_vid in serv_sv_use) exitWith {};
serv_sv_use pushBack _vid;
_servIndex = serv_sv_use find _vid;

_query = format["vehicleInfo:%1:%2",_vid,_pid];


_tickTime = diag_tickTime;
_queryResult = [_query,2] call DB_fnc_asyncCall;

if((EQUAL(EXTDB_SETTINGS("MySQL_Query"),1))) then {
	["diag_log",[
		"------------- Vehicle Query Request -------------",
		format["QUERY: %1",_query],
		format["Time to complete: %1 (in seconds)",(diag_tickTime - _tickTime)],
		format["Result: %1",_queryResult],
		"-------------------------------------------------"
	]] call TON_fnc_logIt;
};

if(EQUAL(typeName _queryResult,typeName "")) exitWith {};

_vInfo = _queryResult;
if(isNil "_vInfo") exitWith {serv_sv_use deleteAt _servIndex;};
if(EQUAL(count _vInfo,0)) exitWith {serv_sv_use deleteAt _servIndex;};

if(EQUAL(SEL(_vInfo,5),0)) exitWith {
	serv_sv_use deleteAt _servIndex;
	[[1,format[(localize "STR_Garage_SQLError_Destroyed"),_vInfo select 2]],"life_fnc_broadcast",_unit,false,true] call life_fnc_MP;
};

if(EQUAL(SEL(_vInfo,6),1)) exitWith {
	serv_sv_use deleteAt _servIndex;
	[[1,format[(localize "STR_Garage_SQLError_Active"),_vInfo select 2]],"life_fnc_broadcast",_unit,false,true] call life_fnc_MP;
};

if!(EQUAL(typeName _sp,typeName "")) then {
	_nearVehicles = nearestObjects[_sp,["Car","Air","Ship"],10];
} else {
	_nearVehicles = [];
};

if(count _nearVehicles > 0) exitWith {
	serv_sv_use deleteAt _servIndex;
	[[_price,_unit_return],"life_fnc_garageRefund",_unit,false] call life_fnc_MP;
	[[1,(localize "STR_Garage_SpawnPointError")],"life_fnc_broadcast",_unit,false,true] call life_fnc_MP;
};

_query = format["vehicleUpdateActive:1:%1:%2",_pid,_vid];


[_query,false] spawn DB_fnc_asyncCall;
if(typeName _sp == "STRING") then {
	_vehicle = createVehicle[(_vInfo select 2),[0,0,999],[],0,"NONE"];
	waitUntil {!isNil "_vehicle" && {!isNull _vehicle}};
	_vehicle allowDamage false;
	_hs = nearestObjects[getMarkerPos _sp,["Land_Hospital_side2_F"],50] select 0;
	_vehicle setPosATL (_hs modelToWorld [-0.4,-4,12.65]);
	sleep 0.6;
} else {
	_vehicle = createVehicle [(_vInfo select 2),_sp,[],0,"NONE"];
	waitUntil {!isNil "_vehicle" && {!isNull _vehicle}};
	_vehicle allowDamage false;
	_vehicle setPos _sp;
	_vehicle setVectorUp (surfaceNormal _sp);
	_vehicle setDir _dir;
};
_vehicle allowDamage true;
//Send keys over the network.
[[_vehicle],"life_fnc_addVehicle2Chain",_unit,false] call life_fnc_MP;
[_pid,_side,_vehicle,1] call TON_fnc_keyManagement;
_vehicle lock 2;
//Reskin the vehicle
[[_vehicle,_vInfo select 8],"life_fnc_colorVehicle",nil,false] call life_fnc_MP;
_vehicle setVariable["vehicle_info_owners",[[_pid,_name]],true];
_vehicle setVariable["dbInfo",[(_vInfo select 4),_vInfo select 7]];
//_vehicle addEventHandler["Killed","_this spawn TON_fnc_vehicleDead"]; //Obsolete function?
[_vehicle] call life_fnc_clearVehicleAmmo;

//Sets of animations

if(EQUAL(SEL(_vInfo,1),"civ") && EQUAL(SEL(_vInfo,2),"B_Heli_Light_01_F") && !(EQUAL(SEL(_vInfo,8),13))) then {
	[[_vehicle,"civ_littlebird",true],"life_fnc_vehicleAnimate",_unit,false] call life_fnc_MP;
};

if(EQUAL(SEL(_vInfo,1),"cop") && (SEL(_vInfo,2)) in ["C_Offroad_01_F","B_MRAP_01_F","C_SUV_01_F","C_Hatchback_01_sport_F"]) then {
	[[_vehicle,"cop_offroad",true],"life_fnc_vehicleAnimate",_unit,false] call life_fnc_MP;
};

if(EQUAL(SEL(_vInfo,1),"med") && (SEL(_vInfo,2)) in ["C_Offroad_01_F","C_Van_01_box_F","C_SUV_01_F","C_Hatchback_01_sport_F","B_MRAP_01_F"]) then {
	[[_vehicle,"med_offroad",true],"life_fnc_vehicleAnimate",_unit,false] call life_fnc_MP;
};
[[1,"Your vehicle is ready!"],"life_fnc_broadcast",_unit,false,true] call life_fnc_MP;
serv_sv_use deleteAt _servIndex;