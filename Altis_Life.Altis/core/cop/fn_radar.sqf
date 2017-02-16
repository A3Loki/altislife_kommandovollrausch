/*
	File: fn_radar.sqf
	Author: Silly Aussie kid named Jaydon
	
	Description:
	Looks like weird but radar?

if(playerSide != west) exitWith {};
private ["_speed","_vehicle"];
_vehicle = cursorTarget;
_speed = round speed _vehicle;

if((_vehicle isKindOf "Car") && (currentWeapon player) == "hgun_P07_snds_F") then
{
	switch (true) do 
	{
		case ((_speed > 33 && _speed <= 80)) : 
		{	
			hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" +(localize "STR_Cop_Radar")+ "<br/><t color='#33CC33'><t align='center'><t size='1'>" +(localize "STR_Cop_VehSpeed"),round  _speed];
		};
		
		case ((_speed > 80)) : 
		{	
			hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" +(localize "STR_Cop_Radar")+ "<br/><t color='#FF0000'><t align='center'><t size='1'>" +(localize "STR_Cop_VehSpeed"),round  _speed];
		};
	};
};
*/



//Edit Motombo
if(!(vehicle player != player)) exitWith {};
if(playerSide != west) exitWith {};
_speed = 0;
_info = "";
_vehicle = [];
_owner =[];
_cars = [];
{
	if (alive _x) then{	
	 	_cars set [(count _cars),_x];
	};
} forEach nearestObjects [vehicle player,["Car"],100];
if(count _cars < 2) exitWith{hint parseText format ["<t color='#5A80EB'><t align='center'><t size='1.5'>ERROR!</t></t><br/><t color='#FF0000'><t size='1'>Keine Fahrzeuge in der Naehe!</t></t>"];};
_vehicle = (_cars select 1);
_type = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
if(count (crew (_vehicle)) == 0) exitWith {hint parseText format ["<t color='#5A80EB'><t align='center'><t size='1.5'>ERROR!</t></t><br/><t color='#FF0000'><t size='1'>Keine Fahrzeuge in der Naehe!</t></t>"];};
_speed = round speed (_vehicle);
_owner = [_vehicle getVariable "vehicle_info_owners"] call life_fnc_vehicleOwners;


// Format speed & owner below here
if(_speed > 110) then {_info = format ["<t color='#5A80EB'><t size='1.5'><t align='center'>Radar<br/><t color='#FF0000'><t align='center'><t size='1'>Geschwindigkeit %1 km/h", _speed];
} else {_info = format ["<t color='#5A80EB'><t size='1.5'><t align='center'>Radar<br/><t color='#33CC33'><t align='center'><t size='1'>Geschwindigkeit %1 km/h", _speed];};
if(isNil {_owner}) then {_info = _info + format ["<br/><t color='#FFD700'><t size='1.5'><t align='center'>Besitzer:<br/><t color='#33CC33'><t align='center'><t size='1.8'> Konnte nicht ausfindig gemacht werden!"];
}else{_info = _info + format ["<br/><t color='#5A80EB'><t size='1.5'><t align='center'>Besitzer:<br/><t color='#33CC33'><t align='center'><t size='1'> %1", _owner];};
_info = _info + format ["<br/><t color='#5A80EB'><t size='1.5'><t align='center'>Fahrzeug:<br/><t color='#33CC33'><t align='center'><t size='1'> %1", _type];

hint parseText _info;