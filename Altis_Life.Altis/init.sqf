StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Kommando Vollrausch V0.865";
NativeGamer_colorSET = compileFinal preprocessFileLineNumbers 'core\functions\fn_colorSet.sqf';
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

StartProgress = true;

if (isNil "Waffenschein") then {
    Waffenschein = false;
    publicVariable "Waffenschein";
};
//[] execVM "snow.sqf";

[] spawn
{
    while {true} do
    {
        if (daytime >= 17 || daytime < 9) then
        {time_status_day = false;}      // NIGHT}
        else
        {time_status_day = true;};      // DAY};
        uiSleep 30;
    };
};

publicVariable "time_status_day";

// Housing
donator_houses = [];

{
    _pos = getMarkerPos _x;
    _houses = nearestObjects [_pos, ["House_F"], 120];

    {
        donator_houses pushBack _x;
    } forEach _houses;
} forEach ["D_Area_1", "D_Area_2"];

publicVariable "donator_houses";