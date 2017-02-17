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
#define Btn9 37458
#define Btn10 37459
#define Title 37401

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9","_Btn10"];

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
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;

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

if((_curTarget getVariable["blindfolded",false])) then
{
	_Btn5 ctrlSetText "Augen öffnen";
	_Btn5 buttonSetAction "[[life_pInact_curTarget],""life_fnc_notBlind"",life_pInact_curTarget,false] spawn life_fnc_MP; [true,""blindfold"",1] call life_fnc_handleInv; closeDialog 0;";
} else
{
	_Btn5 ctrlSetText "Augen verbinden";
	_Btn5 buttonSetAction "[[life_pInact_curTarget, player],""life_fnc_blind"",player,false] spawn life_fnc_MP; closeDialog 0;";
};

_Btn6 ctrlSetText localize "STR_pInAct_Unrestrain";
_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn7 ctrlEnable false;
_Btn8 ctrlEnable false;
_Btn9 ctrlEnable false;
_Btn10 ctrlEnable false;