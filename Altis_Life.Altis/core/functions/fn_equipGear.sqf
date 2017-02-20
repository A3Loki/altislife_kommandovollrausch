/*
	fn_equipGear.sqf
	Author: Keine Ahnung.. Internet? o.O
	Edit: Nox, www.ragecore.de
	Description:
	ReadTheFuckingCode.. :)
*/
private["_path","_unit","_type"];
_unit = [_this,0] call BIS_fnc_param;
_type = [_this,1,"",[""]] call BIS_fnc_param;
/*
if(playerSide == west) then {
	switch(_type) do {
		case "U_Rangemaster" : {
			_path = "textures\cop\cop_clothing.paa";
			_unit setObjectTextureGlobal [0,_path];
		};
		case "U_B_GEN_Soldier_F" : {
			//_path = "textures\cop\captain.paa";
			//_unit setObjectTextureGlobal [0,_path];
		};
		case "U_B_GEN_Commander_F" : {
			//_path = "textures\cop\detective.paa";
			//_unit setObjectTextureGlobal [0,_path];
		};
		case "U_O_V_Soldier_Viper_F" : {
			//_path = "textures\cop\swat.paa";
			//_unit setObjectTextureGlobal [0,_path];
		};
	};
	*/
	if((backpack player) == "B_Bergen_mcamo")  then {
		//(unitBackpack _unit) setObjectTextureGlobal [0, "textures\cop\cop_backpack.paa"];
		(unitBackpack player) setObjectTextureGlobal [0, ""];
	};


if(playerSide == independent) then {
	switch(_type) do {
		case "U_I_HeliPilotCoveralls" : {
			_path = "textures\med\art_uniform.jpg";
			_unit setObjectTextureGlobal [0,_path];
		};
	};
	if((backpack player) == "B_Bergen_mcamo") then {
		(unitBackpack _unit) setObjectTextureGlobal [0, "textures\med\medic_backpack.paa"];
	};	if((backpack player) == "B_Bergen_rgr") then {
		(unitBackpack _unit) setObjectTextureGlobal [0, "textures\med\art_backpack.jpg"];
	};
};
/*
if(playerSide == civilian) then {
	switch(_type) do {
		case "U_C_WorkerCoveralls" : {
			_path = "textures\civ\adac_cloth.jpg";
			_unit setObjectTextureGlobal [0,_path];
		};
		case "U_C_Poloshirt_blue" : {
			_path = "textures\civ\rccloth.jpg";
			_unit setObjectTextureGlobal [0,_path];
		};
	};
};
*/