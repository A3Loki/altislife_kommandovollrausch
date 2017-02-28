#include <macro.h>
/*
	File: fn_kv_adminChangeVehType.sqf
	Author: Loki
	
	Description:
	Change Vehicle Type Handler
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};
private["_type", "_vehList", "_selectedVehicles"];
disableSerialization;
waitUntil {!isNull (findDisplay 75280)};
_type = _this;
_vehList = CONTROL(75280,75308);
_selectedVehicles = [];

lbClear _vehList;

hint _type;

switch(_type) do {
   case "Land": {
      _selectedVehicles = player getVariable "landVeh";
   };
   case "Air": {
      _selectedVehicles = player getVariable "airVeh";
   };
   case "Sea": {
      _selectedVehicles = player getVariable "seaVeh";
   };
   case "Object": {
      _selectedVehicles = player getVariable "objVeh";
   };
};

{
   _vehList lbAdd (getText (configFile >> "CfgVehicles" >> _x >> "displayName"));
   _vehList lbSetData [(lbSize _vehList)-1, _x];
} forEach _selectedVehicles;