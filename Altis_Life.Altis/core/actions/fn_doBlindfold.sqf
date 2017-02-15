/*
    File: fn_doBlindfold.sqf
    Author: Loki

    Description:
    Verbindet Augen von Spieler
*/

_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _unit) exitWith {};
_unit setVariable["blindfolded",true,true];
0 cutText["Ihre Augen wurden verbunden","BLACK FADED"];
0 cutFadeOut 9999999;