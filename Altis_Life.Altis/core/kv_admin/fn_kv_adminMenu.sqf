#include <macro.h>
/*
	File: fn_kv_adminMenu.sqf
	Author: Loki
	
	Description:
	Menu Handler
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};
private["_display","_list","_side"];
disableSerialization;
waitUntil {!isNull (findDisplay 75280)};
_list = CONTROL(75280,75307);
_vehList = CONTROL(75280,75308);
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};

lbClear _list;
lbClear _vehList;

{
	_side = switch(side _x) do {case west: {"Cop"}; case civilian: {"Civ"}; case independent: {"Medic"}; default {"Unknown"};};
	_list lbAdd format["%1 - %2", _x getVariable["realname",name _x],_side];
	_list lbSetdata [(lbSize _list)-1,str(_x)];
} foreach playableUnits;

_landVeh = [];
if(isNull (player getVariable "landVeh")) then {
   {
      if((configName _x) isKindOf "Car" && (getNumber(_x >> "scope") == 2)) then {
         _landConfig pushBack (configName _x);
      }
   } forEach ("true" configClasses (configFile >> "CfgVehicles"));
   player setVariable ["landVeh", _landVeh];
} else {
   _landVeh = player getVariable "landVeh";
};

_airVeh = [];
if(isNull (player getVariable "airVeh")) then {
   {
      if((configName _x) isKindOf "Air" && (getNumber(_x >> "scope") == 2)) then {
         _airVeh pushBack (configName _x);
      }
   } forEach ("true" configClasses (configFile >> "CfgVehicles"));
   player setVariable ["airVeh", _airVeh];
} else {
   _airVeh = player getVariable "airVeh"; 
};

_seaVeh = [];
if(isNull (player getVariable "seaVeh")) then {
   {
      if((configName _x) isKindOf "Ship" && (getNumber(_x >> "scope") == 2)) then {
         _seaVeh pushBack (configName _x);
      }
   } forEach ("true" configClasses (configFile >> "CfgVehicles"));
   player setVariable ["seaVeh", _seaVeh];
} else {
   _seaVeh = player getVariable "seaVeh";
};

_objVeh = [];
if(isNull (player getVariable "objVeh")) then {
   {
      if((configName _x) isKindOf "Thing" && (getNumber(_x >> "scope") == 2)) then {
         _objVeh pushBack (configName _x);
      }
   } forEach ("true" configClasses (configFile >> "CfgVehicles"));
   player setVariable ["objVeh", _objVeh];
} else {
   _objVeh = player getVariable "objVeh";
};

{
   _vehList lbAdd getText (configFile >> "CfgVehicles" >> _x >> "displayName");
   _vehList lbSetData [(lbSize _vehList) - 1, _x];
} forEach _landVeh;

if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};