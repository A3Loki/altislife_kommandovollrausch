/*
Author: Motombo
File: fn_TheorieStart.sqf
Description: Frägt Fragen
*/
private["_display","_Frage","_Antwort_A","_Antwort_B","_Antwort_C","_BtnA","_BtnB","_BtnC","_Counter","_Start","_Abbruch","_random"];
_random = [_this,0,0,[0]] call BIS_fnc_param;
if(!dialog) then {
	createDialog "Auto_Theorie";
};
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

_Abbruch buttonSetAction "closeDialog 0; 0 cutText["""",""BLACK IN""]; player setPos getMarkerPos ""LastPos""; player allowDamage true; deleteMarker ""LastPos"";";


switch (_random) do {
	case 0:
	{
		_AntwortA ctrlShow true;
		_AntwortB ctrlShow true;
		_AntwortC ctrlShow true;
		_BtnA ctrlShow true;
		_BtnB ctrlShow true;
		_BtnC ctrlShow true;
		_Counter ctrlShow true;
		_Start ctrlShow false;
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Wieviel Km/h darfst du in Staedten fahren?"];
		_AntwortA ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>100"];
		_AntwortB ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>80"];
		_AntwortC ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>50"];
		_Counter ctrlsetText "Frage 1/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[1] spawn life_fnc_TheorieStart";
		_BtnB buttonSetAction "[1] spawn life_fnc_TheorieStart";
		_BtnC buttonSetAction "[1] spawn life_fnc_TheorieStart; Theoriepunkte = Theoriepunkte + 1";
		
	};
	case 1:
	{
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Was solltest du IMMER in deinem Fahrzeug dabei haben?"];
		_AntwortA ctrlSetStructuredText parseText format ["<t align='center'>Erste-Hilfe-Kasten und Werkzeugkoffer"];
		_AntwortB ctrlSetStructuredText parseText format ["<t align='center'>Alkohol"];
		_AntwortC ctrlSetStructuredText parseText format ["<t align='center'>Frauen"];
		_Counter ctrlsetText "Frage 2/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[2] spawn life_fnc_TheorieStart; Theoriepunkte = Theoriepunkte +1";
		_BtnB buttonSetAction "[2] spawn life_fnc_TheorieStart";
		_BtnC buttonSetAction "[2] spawn life_fnc_TheorieStart";
	};
	case 2:
	{
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Hinter dir faehrt die Polizei mit Blaulicht und Sirene. Es ist klar ersichtlich das diese dich kontrollieren wollen. Wie verhaelst du dich?"];
		_AntwortA ctrlSetStructuredText parseText format ["<t align='center'>Ich halte rechts an, schalte mein Motor aus und warte auf weitere Anweisungen."];
		_AntwortB ctrlSetStructuredText parseText format ["<t align='center'>Ich halte links an, schalte mein Motor aus und warte auf weitere Anweisungen."];
		_AntwortC ctrlSetStructuredText parseText format ["<t align='center'>Polizei?! Scheisse, schnell Offroad versuchen diese los zu werden. "];
		_Counter ctrlsetText "Frage 3/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[3] spawn life_fnc_TheorieStart; Theoriepunkte = Theoriepunkte + 1";
		_BtnB buttonSetAction "[3] spawn life_fnc_TheorieStart";
		_BtnC buttonSetAction "[3] spawn life_fnc_TheorieStart";
	};
	case 3:
	{
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Wie schnell darfst du ausserhalb von Staedten fahren?"];
		_AntwortA ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>100"];
		_AntwortB ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>80"];
		_AntwortC ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>50"];
		_Counter ctrlsetText "Frage 4/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[4] spawn life_fnc_TheorieStart; Theoriepunkte = Theoriepunkte + 1";
		_BtnB buttonSetAction "[4] spawn life_fnc_TheorieStart";
		_BtnC buttonSetAction "[4] spawn life_fnc_TheorieStart";
	};
	case 4:
	{
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Mit wieviel Promille bist du noch Fahrtauglich?"];
		_AntwortA ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>0,3 Promille"];
		_AntwortB ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>0,5 Promille"];
		_AntwortC ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>2.4 Promille"];
		_Counter ctrlsetText "Frage 5/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[5] spawn life_fnc_TheorieStart";
		_BtnB buttonSetAction "[5] spawn life_fnc_TheorieStart; Theoriepunkte = Theoriepunkte + 1";
		_BtnC buttonSetAction "[5] spawn life_fnc_TheorieStart";
	};
	case 5:
	{
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Welche Profiltiefe muessen meine Reifen vorweisen? (Egal ob Sommer- oder Winterreifen)"];
		_AntwortA ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>1,6mm"];
		_AntwortB ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>4mm"];
		_AntwortC ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>1,4mm"];
		_Counter ctrlsetText "Frage 6/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[6] spawn life_fnc_TheorieStart; Theoriepunkte = Theoriepunkte + 1";
		_BtnB buttonSetAction "[6] spawn life_fnc_TheorieStart";
		_BtnC buttonSetAction "[6] spawn life_fnc_TheorieStart";
	};
	case 6:
	{
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Wie hoch betraegt der Mindestabstand zum Vor-mir-fahrenden ausserorts?"];
		_AntwortA ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>100 Meter"];
		_AntwortB ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>10 Meter"];
		_AntwortC ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>50 Meter"];
		_Counter ctrlsetText "Frage 7/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[7] spawn life_fnc_TheorieStart";
		_BtnB buttonSetAction "[7] spawn life_fnc_TheorieStart";
		_BtnC buttonSetAction "[7] spawn life_fnc_TheorieStart; Theoriepunkte = Theoriepunkte + 1";
	};
	case 7:
	{
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Was wurde ab dem 01.07.2015 fuer jeden Auto-Fahrer zur Pflicht?"];
		_AntwortA ctrlSetStructuredText parseText format ["<t align='center'>Angezogen Auto fahren"];
		_AntwortB ctrlSetStructuredText parseText format ["<t align='center'>Ein Warndreieck im Auto zu haben"];
		_AntwortC ctrlSetStructuredText parseText format ["<t align='center'>Eine Warnweste im Auto zu haben"];
		_Counter ctrlsetText "Frage 8/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[8] spawn life_fnc_TheorieStart";
		_BtnB buttonSetAction "[8] spawn life_fnc_TheorieStart";
		_BtnC buttonSetAction "[8] spawn life_fnc_TheorieStart; Theoriepunkte = Theoriepunkte + 1";
	};
	case 8:
	{
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Wie hoch muss der Abstand vor und nach einer Kreuzung/Abbiegung betragen, um dort parken zu duerfen?"];
		_AntwortA ctrlSetStructuredText parseText format ["<t align='center'>Abstand? Direkt vor- oder dannach"];
		_AntwortB ctrlSetStructuredText parseText format ["<t align='center'>5 Meter"];
		_AntwortC ctrlSetStructuredText parseText format ["<t align='center'>50 Meter"];
		_Counter ctrlsetText "Frage 9/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[9] spawn life_fnc_TheorieStart";
		_BtnB buttonSetAction "[9] spawn life_fnc_TheorieStart; Theoriepunkte = Theoriepunkte + 1";
		_BtnC buttonSetAction "[9] spawn life_fnc_TheorieStart";
	};
	case 9:
	{
		_Frage ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>Wie schnell darf ich mit Schneeketten fahren?"];
		_AntwortA ctrlSetStructuredText parseText format ["<t align='center'>VOLLGAS! Wenn ich zu langsam fahr bleib ich ja stecken"];
		_AntwortB ctrlSetStructuredText parseText format ["<t align='center'>50km/h"];
		_AntwortC ctrlSetStructuredText parseText format ["<t align='center'>80km/h"];
		_Counter ctrlsetText "Frage 10/10";
		_BtnA ctrlsetText "A ist richtig";
		_BtnB ctrlsetText "B ist richtig";
		_BtnC ctrlsetText "C ist richtig";
		_BtnA buttonSetAction "[] spawn life_fnc_TheorieEnde";
		_BtnB buttonSetAction "[] spawn life_fnc_TheorieEnde; Theoriepunkte = Theoriepunkte + 1";
		_BtnC buttonSetAction "[] spawn life_fnc_TheorieEnde";
	};
	default 
	{
		_Frage ctrlSetStructuredText parseText format ["Test fehlgeschlagen"];
	};
};