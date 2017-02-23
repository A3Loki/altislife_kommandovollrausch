/*
Author: Motombo
File: fn_TheorieEnde.sqf
Description: Schließt den Dialog und stellt die Temporäre Lizenz aus
*/
 
private["_display","_Frage","_Antwort_A","_Antwort_B","_Antwort_C","_BtnA","_BtnB","_BtnC","_Counter","_Start","_Abbruch","_random"];
 
disableSerialization;
 
_display = findDisplay 555;
_Frage = _display displayCtrl 1101;
_AntwortA = _display displayCtrl 1102;
_AntwortB = _display displayCtrl 1103;
_AntwortC = _display displayCtrl 1104;
_BtnA = _display displayCtrl 2400;
_BtnB = _display displayCtrl 2401;
_BtnC = _display displayCtrl 2402;
_Start = _display displayCtrl 2403;
_Abbruch = _display displayCtrl 2404;
_Counter = _display displayCtrl 1105;
 
 
 
_AntwortA ctrlShow false;
_AntwortB ctrlShow false;
_AntwortC ctrlShow false;
_BtnA ctrlShow false;
_BtnB ctrlShow false;
_BtnC ctrlShow false;
_Start ctrlShow false;
_Counter ctrlShow false;
_Abbruch ctrlShow false;
 
if(Theoriepunkte >= 8) then {
        _Frage ctrlSetStructuredText parseText format ["<t color='#FF0000'><t size='2'><t align='center'>Herzlichen Glueckwunsch<br/><br/><t color='#ffffff'><t align='left'><t size='1'> Du hast die Fahrpruefung erfolgreich berstanden! "];
        _Abbruch ctrlShow true;
        _Abbruch ctrlSettext "Abbrechen";
        _Abbruch buttonSetAction "closeDialog 0;0 cutText["""",""BLACK IN""];";
        license_civ_driver = true;
} else {
        _Frage ctrlSetStructuredText parseText format ["<t color='#FF0000'><t size='2'><t align='center'>Durchgefallen!<br/><br/><t color='#ffffff'><t align='left'><t size='1'>Du hast leider nicht bestanden. Du hast nun eine Cool-Down Strafe von 10 Minuten. Der Dialog schliesst sich gleich automatisch und bringt dich zurueck wo du her kamst. Nutz die 10 Minuten sinnvoll und lerne! Viel Erfolg beim naechsten Versuch"];
        sleep 20;
        closeDialog 0;
        Theoriestrafe = true;
        0 cutText["","BLACK IN"];
        sleep 600;
        Theoriestrafe = false;
        };