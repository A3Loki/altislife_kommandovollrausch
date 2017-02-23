/*
Author: Motombo
File: fn_Theoriepruefung.sqf
Description: Öffnet den Dialog für die Theorie-Prüfung
*/
private["_ok","_display","_Frage","_Antwort_A","_Antwort_B","_Antwort_C","_BtnA","_BtnB","_BtnC","_Counter","_Start","_Abbruch"];
	if(!dialog) then {
		createDialog "Auto_Theorie";
	};
	disableSerialization;
	0 cutText["","BLACK FADED"];
	0 cutFadeOut 9999999;

	_display = findDisplay 555;
	waitUntil {sleep 0.01; (!(isNull (findDisplay 555)))};
	_display displayAddEventHandler ["KeyDown","_this call life_fnc_escDialog"];
	_Frage = _display displayCtrl 1101;
	_Header = _display displayCtrl 1100;
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
	_Counter ctrlShow false;
	_Frage ctrlShow true;
	_Start ctrlShow true;
	_Abbruch ctrlShow true;

	_Abbruch buttonSetAction "closeDialog 0; 0 cutText["""",""BLACK IN""];";

	_Frage ctrlSetStructuredText parseText format ["<t color='#FF0000'><t size='2'><t align='center'>Herzlich Willkommen zur Fahrpruefung<br/><br/><t color='#ffffff'><t align='left'><t size='1'>In diesem kleinen Test werden dir 10 Fragen rund ums Thema <t color='#00FF0D'>richtiges Verhalten im Strassenverkehr<t color='#ffffff'> gestellt. Von den 10 Fragen welche dir gestellt werden, darfst du nur maximal 2 falsch beantworten. Dein Ergebnis erhaelst du am Ende der Pruefung. Um dir jegliche Ablenkungen durch Dritte zu ersparen, haben wir es uns erlaubt dich an einem sicheren Ort zu stellen. Nach abschliessen der Pruefung kommst du aber wieder sicher zurueck.<br/><t color='#FF0000'><t size='2'><t align='center'> Viel Erfolg!"];
	_Header ctrlSetStructuredText parseText format ["<t align='center'>Theoretische Fahrpruefung - Staat Altis"];
	_Start ctrlSetToolTip "Bereit fuer die Pruefung!";
	_Start buttonSetAction  "[0] spawn life_fnc_TheorieStart";