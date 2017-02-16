[] call SOCK_fnc_updateRequest;


disableSerialization;
player allowDamage false;
showChat false;
showHud false;
showMap false;
disableUserInput true;
hintSilent "";
//Turn off the player tags.
life_tagson = false;
[LIFE_ID_PlayerTags,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;
1 fadeSound 0;
1 fadeMusic 0;
1 fadeRadio 0;
1 fadeSpeech 0;
life_disablehud = true; //Tell our hud to clear.
[] spawn life_fnc_hudUpdate;



_logoutCam = "camera" camCreate (player modelToWorldVisual [-5,0,1.85]);
_logoutCam cameraEffect ["internal","back"];
_logoutCam camSetFov 2.000;
_logoutCam camSetTarget vehicle player;
_logoutCam camSetRelPos [0,-1,1.85];

_logoutCam camCommit 0;
waitUntil {camCommitted _logoutCam};

_logoutCam camSetFov 2;
_logoutCam camSetRelPos [0,-5,1.85];
_logoutCam camCommit 2;
8 cutFadeOut 3;
waitUntil {camCommitted _logoutCam};

_logoutCam camSetFov 9;
_logoutCam camSetRelPos [0,-5,1050.85];
_logoutCam camCommit 2.5;
waitUntil {camCommitted _logoutCam};


cutText ["","BLACK",1]; //Fade the screen to black, in prep for the outro.
sleep 0.2; //Wait for the fade.
//["videos\intro.ogv"] spawn BIS_fnc_playVideo;
sleep 0.35;

_name = name player;

[
	format[
	"<t size='1.3' color='#5600FF'>Bis bald!</t><br/>Wir hoffen du besuchst uns bald wieder, %1. <br/><t size='1.1'></t>",_name],
	0,
	0.2,
	10,
	0,
	0,
	8
] spawn BIS_fnc_dynamicText;


if(!life_is_arrested) then {
	player setPos (getMarkerPos "respawn_civilian");
};
sleep 3;
0 fadeSound 1;
0 fadeMusic 1;
0 fadeRadio 1;
0 fadeSpeech 1;
[[player],"TON_fnc_cleanupRequest",false,false] spawn life_fnc_MP;
disableUserInput false;
["",0,0.2,10,0,0,8] spawn BIS_fnc_dynamicText;
["Aborted",true,false] spawn BIS_fnc_endMission;
_logoutCam cameraEffect ["terminate","back"];
camDestroy _logoutCam;
showChat true;
showHud true;
showMap true;