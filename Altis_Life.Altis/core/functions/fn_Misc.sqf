private["_objects"];
_objects = nearestObjects [[0,0,0], ["Land_wpp_Turbine_V1_F","Land_wpp_Turbine_V2_F"], 2500000];
{
	deleteVehicle _x;
} foreach (_objects);