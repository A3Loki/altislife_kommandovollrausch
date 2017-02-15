/*
	File: fn_copInteractionMenu.sqf
	Author: Bryan "Tonic" Boardwine
	Edit: Nox, www.ragecore.de
	Description: The code is documentation enough
*/

#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Title 37401

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7"];

if(!dialog) then {
createDialog "pInteraction_Menu";
};

disableSerialization;
_curTarget = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
if(!isPlayer _curTarget) exitWith {closeDialog 0;}; //Bad side check?

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;

life_pInact_curTarget = _curTarget;

_Btn1 ctrlSetText localize "STR_pInAct_AusweisZeigen";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_civShowLicense; closeDialog 0;";

if((_curTarget getVariable["Escorting",false])) then {
_Btn2 ctrlSetText localize "STR_pInAct_StopEscort";
_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; [life_pInact_curTarget] call life_fnc_civInteractionMenu;";
} else {
_Btn2 ctrlSetText localize "STR_pInAct_Escort";
_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};

_Btn3 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;"; 

	
	

_Btn4 ctrlSetText localize "STR_pInAct_Lappenzeigen";
_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_showLappen; closeDialog 0;";

_Btn5 ctrlEnable false;
_Btn7 ctrlEnable false;
_Btn8 ctrlEnable false;