#include <macro.h>
/*
	File: fn_removeItem.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Removes the selected item & amount to remove from the players
	virtual inventory.
*/
private["_data","_value","_obj"];
disableSerialization;
_data = lbData[2005,(lbCurSel 2005)];
_value = ctrlText 2010;
if(EQUAL(_data,"")) exitWith {hint "Du hast nichts zum entfernen ausgewaehlt.";};
if(!([_value] call TON_fnc_isnumber)) exitWith {hint "Du benutzt kein gueltiges Format."};
if(parseNumber(_value) <= 0) exitWith {hint "Gebe einen Betrag ein, den du entfernen möchtest."};
if(EQUAL(ITEM_ILLEGAL(_data),1) && ([west,visiblePosition player,100] call life_fnc_nearUnits)) exitWith {titleText["Das ist ein Illegales Item, du kannst keine Beweise verschwinden lassen.","PLAIN"]};
if(player != vehicle player) exitWith {titleText["Willst du dein Fahrzeug dreckig machen?","PLAIN"]};
if(!([false,_data,(parseNumber _value)] call life_fnc_handleInv)) exitWith {hint "So viel hast du nicht..."};

hint format["Du hast %1 %2 aus deinem Inventar entfert.",(parseNumber _value),(localize ITEM_NAME(_data))];

[] call life_fnc_p_updateMenu;
