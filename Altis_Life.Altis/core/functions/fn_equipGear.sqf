#include <macro.h>
/*
	fn_equipGear.sqf
	Author: Keine Ahnung.. Internet? o.O
	Edit: Nox, www.ragecore.de
	Description:
	ReadTheFuckingCode.. :)
*/
private["_path","_unit","_type","_coplevel","_medlevel"];
_unit = [_this,0] call BIS_fnc_param;
_type = [_this,1,"",[""]] call BIS_fnc_param;


if(playerSide == west) then {
	_coplevel = FETCH_CONST(life_coplevel);
   switch(_coplevel) do {
      case 1: {
         switch(_type) do {
            case "U_Rangemaster" : {
               _path = "textures\cop\pka_shirt.jpg";
               _unit setObjectTextureGlobal [0,_path];
            };
         };
      };
      case 2: {
         switch(_type) do {
            case "U_Rangemaster" : {
               _path = "textures\cop\pk_shirt.jpg";
               _unit setObjectTextureGlobal [0,_path];
            };
         };
      };
      case 3;
      case 4;
      case 5;
      case 6;
      case 7;
      case 8: {
         switch(_type) do {
            case "U_Rangemaster" : {
               _path = "textures\cop\pp_shirt.jpg";
               _unit setObjectTextureGlobal [0,_path];
            };
         };
      };
      case 9;
      case 10;
      case 11: {
			hint "undefined";
		};
   };


   if((backpack player) == "B_Bergen_mcamo")  then {
       (unitBackpack player) setObjectTextureGlobal [0, ""];
   };
};


if(playerSide == independent) then {
	_medlevel = FETCH_CONST(life_mediclevel);
   switch(_medlevel) do {
      case 1: {
         switch(_type) do {
            case "U_I_HeliPilotCoveralls" : {
               _path = "textures\med\art_uniform.jpg";
			   _unit setObjectTextureGlobal [0,_path];
            };
         };
      };
      case 2;
      case 3;
      case 4: {
         switch(_type) do {
            case "U_IG_Guerilla2_1" : {
               _path = "textures\med\medic_uniform.jpg";
			   _unit setObjectTextureGlobal [0,_path];
            };
         };
      };
      case 5: {
			hint "undefined";
		};
   };
	
	
	if((backpack player) == "B_Bergen_rgr") then {
		(unitBackpack _unit) setObjectTextureGlobal [0, ""];
	};
};

/*
if(playerSide == civilian) then {
	if(_type) then {
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