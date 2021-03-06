#include <macro.h>

/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Loads the medic out with the default gear.
*/

private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default medic gear.
player addUniform "U_I_HeliPilotCoveralls";
player setObjectTextureGlobal [0,"textures\med\art_uniform.jpg"];
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";

 if((FETCH_CONST(life_mediclevel)) > -1) then
{
player addUniform "U_I_HeliPilotCoveralls";
player setObjectTextureGlobal [0,"textures\med\art_uniform.jpg"];
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
};

if((FETCH_CONST(life_mediclevel)) == 2) then
{
player addUniform "U_I_HeliPilotCoveralls";
player setObjectTextureGlobal [0,"textures\med\art_uniform.jpg"];
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
};

 if((FETCH_CONST(life_mediclevel)) == 3) then
{
player addUniform "U_I_HeliPilotCoveralls";
player setObjectTextureGlobal [0,"textures\med\art_uniform.jpg"];
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
};

if((FETCH_CONST(life_mediclevel)) == 4) then
{
player addUniform "U_IG_Guerilla2_1";
player setObjectTextureGlobal [0,"textures\med\medic_uniform.jpg"];
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
};

 if((FETCH_CONST(life_mediclevel)) == 5) then
{
player addUniform "U_IG_Guerilla2_1";
player setObjectTextureGlobal [0,"textures\med\medic_uniform.jpg"];
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
};

[player, uniform player] call life_fnc_equipGear;
[] call life_fnc_saveGear;