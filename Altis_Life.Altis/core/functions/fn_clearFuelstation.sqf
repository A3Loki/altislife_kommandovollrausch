private["_var","_markername","_marker"];
life_fuelstation_stationlist = (nearestObjects [getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition"), ["Land_fs_feed_F","Land_CarService_F"], 25000]);
_var = 0;
    {
        _nearPump = nearestObjects [getPos _x, ["Land_fs_feed_F"], 45];
        sleep 0.1;
        if (_x isKindOf "Land_CarService_F" && count _nearPump > 0) then {
            _var = _var + 1;
            _markername = format ["%1",_var];
            _marker = createMarker ["Tankstelle_"+_markername, getPos _x];
            _marker setMarkerColor "ColorGreen";
            _marker setMarkerText "Tankstelle";
            _marker setMarkerType "loc_Fuelstation";
            _x setvehicleVarname "Tankstelle_"+_markername;
        };
        _x setFuelCargo 0;
    } forEach life_fuelstation_stationlist;