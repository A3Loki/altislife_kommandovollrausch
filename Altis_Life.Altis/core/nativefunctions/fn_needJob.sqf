/*
	Author: Nox, www.ragecore.de
	Description: Willkommen auf Altis! :D
*/


if ( !license_civ_rebel && playerSide == civilian) then {

	format["Willkommen, %1!",profileName] hintC

	[
		"Willkommen in Selakano, der Stadt der Freiheit!",
		"Um mehr über uns zu erfahren und um den Rebellen von Altis beizutreten musst du dich zuerst in unsere Gesellschaft einkaufen.",
		"Sprich mit Che Guevara im südlichen Selakano und komm danach wieder zu mir."
	];
};

if ( license_civ_rebel && playerSide == civilian) then {

//playsound "survival";

	format["Grüße, %1 !",profileName] hintC
	[
		"Hm, lasst mich nachdenken...",
		"Wir suchen derzeit dringend Leute welche uns bei einigen Transporten behilflich sein können. Es handelt sich um Waffen welche die Grenze unauffällig passieren und in unser Lager gebracht werden müssen um unsere Truppen auszurüsten.",
		"Begib dich nach Syrta und sprich dort mit Dimitri, er hat sicherlich eine lohnenswerte Aufgabe für dich!"
	];
};
