StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
NativeGamer_colorSET = compileFinal preprocessFileLineNumbers 'core\functions\fn_colorSet.sqf';
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

if(!isDedicated) then {
    if((getPlayerUID player) in KV_temp_banned_players) then {
        ["Banned",FALSE,TRUE] call BIS_fnc_endMission;
    };
};

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
        if (daytime >= 19 || daytime < 5) then
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