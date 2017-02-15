_counter = 30;

	while{StartPruefung} do
	{
		_counter = _counter - 1;
		hintSilent format ["Du hast noch %1 Sekunden", _counter];
		sleep 1;
		if(_counter < 1) exitWith { hint "Deine Zeit ist abgelaufen. Du hast die Prüfung leider nicht bestanden!"; player setPos getmarkerPos "LastPos"; deleteVehicle Ziel; deleteMarker "LastPos"; deleteVehicle Plattform; [] call life_fnc_LoadGear; Waffenschein = false; publicVariable "Waffenschein";};
	};