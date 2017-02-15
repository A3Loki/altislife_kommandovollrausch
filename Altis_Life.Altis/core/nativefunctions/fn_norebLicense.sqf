/*
	Author: Nox, www.ragecore.de
	Description: Willkommen auf Altis! :D
*/


if ( !license_civ_rebel && playerSide == civilian) then {

	format["Grüße, %1!",profileName] hintC

	[
		"Willkommen in Selakano, der Stadt der Freiheit!",
		"Scheinbar gehörst du noch nicht zu den Rebellen von Altis...",
		"Sprich mit Che Guevara im Süden von Selakano um dich uns anzuschließen!"
	];
};


if ( license_civ_rebel && playerSide == civilian) then {

	format["Hallo, %1!",profileName] hintC

	[
		"Willkommen in Selakano, der Stadt der Freiheit!",
		"Bei mir erhälst du alles nötige um ein richtiger Rebell zu werden.",
		"Schau dich in Ruhe um."
	];
};