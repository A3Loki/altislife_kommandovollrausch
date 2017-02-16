/*
	Author: Nox, www.ragecore.de
	Description: Willkommen auf Altis! :D
*/


if ( !license_civ_rebel && playerSide == civilian) then {

	format["Willkommen, %1!",profileName] hintC

	[
		"Willkommen in Selakano, der Stadt der Freiheit!",
		"Um mehr über uns zu erfahren und um den Rebellen von Altis beizutreten musst du dich zuerst in unsere Gesellschaft einkaufen."
	];
};

if ( license_civ_rebel && playerSide == civilian) then {

playsound "survival";

	format["Willkommen, %1 !",profileName] hintC
	[
		"Willkommen in Selakano, der Stadt der Freiheit!",
		"Jemand hat mir bereits erzählt dass ihr kommen würdet um mehr über uns und unsere Geschäfte zu erfahren.",
		"Unser Ziel ist es die Regierung zu stürzen um Altis zu einem Ort der Freiheit und des Wohlstandes zu machen.",
		"Die Rebellen von Altis kontrollieren einen großteil der Handelsrouten hier auf Altis und unsere Macht und die Anzahl unserer Anhänger wächst mit jedem Tag!",
		"Wir haben schon seit einiger Zeit ein Auge auf die Goldreserven des Staates geworfen und schrecken nicht davor zurück uns diese unter den Nagel zu reißen um ein faires Verhältnis zwischen unseren Reichtümern und denen der Regierung zu schaffen.",
		"Und nun gehe deinen Pflichten nach! Unterstütze unser handeln und verbreite die Botschaft der Rebellen von Altis!",
		"Wir schlafen nie, wir haben keine Angst, denn wir bilden den Widerstand!"
	];
};
