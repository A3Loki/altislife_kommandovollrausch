/*
	Author: Nox, www.ragecore.de
	Description: Willkommen auf Altis! :D
*/


if (playerSide == west) then {

	format["Hm?",profileName] hintC

	[
		"Wer seid ihr und was wollt ihr hier?",
		"Verschwindet lieber, oder ich lasse euch enthaupten!"
	];
};

if ( !license_civ_rebel && playerSide == civilian) then {

	format["Hallo Fremder!",profileName] hintC

	[
		"Wie ich sehe gehört ihr noch nicht zu den Rebellen von Altis...",
		"Sprecht mit Che Guevara im Süden von Selakano um einer von uns zu werden!"
	];
};

if ( license_civ_rebel && playerSide == civilian) then {

playsound "dimitri";

	format["Grüße, %1 !",profileName] hintC
	[
		"Schön dass ihr hierher gefunden habt!",
		"Unsere Truppen benötigen dringen einige Waffenlieferungen da unsere Vorräte langsam zu neige gehen. Besorgt euch einen LKW und schafft diese Waffen nach Panagia, möglichst ohne euch dabei von der Polizei erwischen zu lassen.",
		"Viel Erfolg, lang lebe der Widerstand!"
	];
};
