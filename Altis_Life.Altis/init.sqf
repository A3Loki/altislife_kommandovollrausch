StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
NativeGamer_colorSET = compileFinal preprocessFileLineNumbers 'core\functions\fn_colorSet.sqf';
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";


StartProgress = true;

if (isNil "Waffenschein") then {
    Waffenschein = false;
    publicVariable "Waffenschein";
};
//[] execVM "snow.sqf";