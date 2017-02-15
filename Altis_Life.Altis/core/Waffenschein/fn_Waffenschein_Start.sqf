private["_handle"];

_lastpos = createMarkerLocal ["LastPos", position player];
StartPruefung = false;
_counter = 30; //Zeit 
Plattform = "Land_VR_Block_01_F" createVehicleLocal [15384.3,30293.3,-7.5557],0,"CAN_COLLIDE";
Plattform setPos [15384.3,30293.3,-7.5557];
0 cutText["Das Areal wird gerade aufgebaut, zudem wird deine Ausruestung gespeichert und du ziehst deine Trainingssachen an","BLACK FADED"];
0 cutFadeOut 9999999;
player allowDamage false;
sleep 1;
player setPos [15383.9,30293.7,0.5];
player setDir 268.9805;
[] call life_fnc_saveGear;
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
_handle = [] spawn life_fnc_Waffenschein_Loadout;
waitUntil {scriptDone _handle};
0 cutText["","BLACK IN"]; 
player allowDamage true;

_Startfrage = 
[
format[localize "STR_Start_Waffenschein"],
localize "STR_Waffenschein_Layer",
localize "STR_Waffenschein_Los",
localize "STR_Waffenschein_No"
] call BIS_fnc_guiMessage;
if(!(_Startfrage)) exitWith { life_cash = life_cash + 500; player setPos getmarkerPos "LastPos"; hintSilent format ["Du hast die Pruefung nicht mal probiert und gibst schon auf. Schaem dich!"]; deleteMarker "LastPos"; deleteVehicle Plattform;[] call life_fnc_LoadGear; deleteVehicle Ziel; Waffenschein = false; publicVariable "Waffenschein"; };
//Abfragen und Marker erstellen
Treffer = false;
Erfolgreich = false;
StartPruefung = true;
execVM "core\Waffenschein\Waffenschein_Counter.sqf";

Ziel = "TargetP_Inf_Acc1_NoPop_F" createVehicleLocal [0,0,0],0,"CAN_COLLIDE";
Ziel setPos [15364.3,30294.2,0];
Ziel setDir 268.9805;
Ziel addEventHandler ["HitPart", {Treffer = true;}];
waitUntil {Treffer};
Treffer = false;
Ziel setPos [15353.4,30288.7,11.9926];
waitUntil {Treffer};
Treffer = false;
Ziel setPos [15356.2,30296.5,9.02052];
waitUntil {Treffer};
Treffer = false;
Ziel setPos [15359.7,30300.9,1.91582];
waitUntil {Treffer};
Treffer = false;
Ziel setPos [15359.9,30285.2,5.98009];
waitUntil {Treffer};
Treffer = false;
Ziel setPos [15358.6,30291.4,3.61635];
waitUntil {Treffer};
Treffer = false;
Ziel setPos [15350.4,30291.6,1.83096];
waitUntil {Treffer};
Treffer = false;
Ziel setPos [15350.9,30299.7,13.422];
waitUntil {Treffer};
Treffer = false;
Ziel setPos [15349.8,30285.3,16.1128];
waitUntil {Treffer};
Treffer = false;
Ziel setPos [15346.8,30295.3,2.02021];
Ziel removeallEventhandlers "HitPart";
Ziel addEventHandler ["HitPart", 
{
StartPruefung = false;
playSound "Geschafft";
[] spawn life_fnc_WGear;
hintSilent format ["Herzlichen Glueckwunsch! Du hast den Waffenschein mehr als nur verdient! Du bist nun berechtigt Legale Waffen bei dir zu tragen!"];
player setPos (getMarkerPos "LastPos");
license_civ_gun = true;
deleteMarker "LastPos";
deleteVehicle Plattform;
deleteVehicle Ziel;
Waffenschein = false;
publicVariable "Waffenschein";
}];