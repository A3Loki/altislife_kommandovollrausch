/*
	Author: Nox, www.ragecore.de
	Description: Willkommen auf Altis! :D
*/


if ( !license_civ_ausweis && playerSide == civilian) then {

	format["Willkommen, fremder!",profileName] hintC

	[
		"Willkommen auf Altis!",
		"Es sieht so aus als wärst du neu hier, begib dich am besten erst einmal zum Einwohnermeldeamt am Empfang hier im Flughafen, um dort deinen Ausweis und somit die Staatsbürgerschaft von Altis zu erhalten.",
		"Sprich danach noch einmal mit mir, dann ich habe villeicht ein oder zwei nützliche Informationen für dich."
	];
};

if ( license_civ_ausweis && playerSide == civilian) then {

	format["Willkommen, %1 !",profileName] hintC
	[
		"Willkommen auf Altis! Wie ich sehe hast du bereits deinen Ausweis erhalten und bist somit nun ein stolzer Bürger von Altis. Gratulation!",
		"Hier auf Altis stehen dir alle Türen offen.",
		"Beginne ein völlig neues Leben, entscheide dich fuer einen Beruf und baue dir eine Monopolstellung auf, schliesse dich den Gesetzeshuetern an oder zahle es der Obrigkeit heim.",
		"Bei letzterem könnten wir dir unter Umständen behilflich sein",
		"Wir, die Rebellen von Altis haben sich den Widerstand gegen den Staat geschworen und wir werden nicht eher ruhen bis auch der letzte Beamte seinen Rücktritt ankündigt oder im Kampf fällt, damit wir die Insel beherrschen und nach unseren Wünschen und Vorstellungen leben können!",
		"Wenn du mehr über uns und unsere Organisation erfahren möchtest sprich mit Che Guevara im südlichen Teil von Selakano.",
		"Besorg dir am besten zuerst ein Fahrzeug und begib dich anschließend nach Athira um dort etwas Geld für die Reise nach Selakano zu machen",
		"Viel Erfolg und bis bald!"
	];
};