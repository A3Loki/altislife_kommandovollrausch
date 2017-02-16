private["_type","_uid","_ok"];
_type = _this select 0;
_uid = _this select 1;
_name = _this select 2;
_ok = "AltisLifeRPG.de";



switch (_type) do {
	case "Theorie":
	{
		diag_log format ["Theoretische Fahrpruefung wurde von %1 mit der UID %2 gestartet.", _name, _uid];
		[[_ok],"life_fnc_Theoriepruefung",_uid,false] spawn life_fnc_MP;
	};
	case "Waffe":
    {
        diag_log format ["Waffenschein wurde von %1 mit der UID %2 gestartet.", _name, _uid];
        Waffenschein = true;
        publicVariable "Waffenschein";
        [[_ok],"life_fnc_Waffenschein_Start",_uid,false] spawn life_fnc_MP;
    };
};