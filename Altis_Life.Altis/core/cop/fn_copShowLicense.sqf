#include <macro.h>

private["_target", "_message","_coplevel","_rank"];

_target = cursorTarget;

if (playerSide != west) exitWith {hint "Du bist kein Cop!";};
if (isNull _target) then {_target = player;};
if (!(_target isKindOf "Man")) then {_target = player;};
if (!(alive _target)) then {_target = player;};

switch (FETCH_CONST(life_coplevel)) do
{
	case 1: { _rank = "Rekrut"; };
	case 2: { _rank = "Wachtmeister"; };
	case 3: { _rank = "Oberwachtmeister"; };
	case 4: { _rank = "Hauptwachtmeister"; };
	case 5: { _rank = "Leutnant"; };
	case 6: { _rank = "Oberleutnant"; };
	case 7: { _rank = "Hauptmann"; };
	case 8: { _rank = "Stabshauptmann"; };
	case 9: { _rank = "Major"; };
	case 10: { _rank = "Chef"; };
	case 11: { _rank = "GIGN"; };
};

_message = format["<img size='8' color='#FFFFFF' image='textures\ausweise\marke.jpg'/><br/><br/><t size='2'>%1</t><br/><t size='1.8'>%2</t><br/><t size='1'>Gendarmerie Altis</t>", name player, _rank];

[[player, _message],"life_fnc_copLicenseShown",_target,false] spawn life_fnc_MP;
