#include <macro.h>
/*
	File: fn_kv_adminChangeVehType.sqf
	Author: Loki
	
	Description:
	Change Vehicle Type Handler
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};
private["type", "_vehList", "_selectedVehicles"];
_type = _this select 0;
_vehList = CONTROL(75280,75308);

lbClear _vehList;

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
   _vehList lbAdd getText (configFile >> "CfgVehicles" >> _x >> "displayName");
   _vehList lbSetData [(lbSize _vehList) - 1, _x];
} forEach _selectedVehicles;

hint format["%1 wurde gefreezed/entfreezed.", _name];