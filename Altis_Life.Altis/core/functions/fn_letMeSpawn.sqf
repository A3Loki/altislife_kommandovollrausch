/*

	Author: Nox
	Web: www.native-network.net & www.ntechit.de 
	Description: Lesen bildet.



waitUntil { alive player };
waitUntil {!isNil "bis_fnc_init"};

player allowDamage false;
disableUserInput true;
showChat false;
showHud false;
showMap false;

_video = [ "videos\spawn.ogv" ] spawn BIS_fnc_playVideo;

showChat true;
showHud true;
showMap true;
player allowDamage true;
disableUserInput false;
[player, uniform player] call life_fnc_equipGear;
[] call life_fnc_hudSetup;

*/

/*
	Author: Nox, www.ragecore.de
	Description: Lesen bildet.
*/
private [ "_camera","_RageCoreIntroCameraDistance"];

showChat false;
showHud false;
showMap false;
_RageCoreIntroCameraDistance = 3800;
waitUntil {alive player};
[] spawn {
	_hndl = ppEffectCreate ["colorCorrections", 1301];
	_hndl ppEffectEnable true;
	_hndl ppEffectAdjust 
	[1,1,-0.01,[1.2, 0.5, 0.0, 0.5],[1, 1, 1, 1],[0, 0, 0, 1]];
	_hndl ppEffectCommit 0;
	sleep 3;
	_hndl ppEffectEnable true;
	_hndl ppEffectAdjust 
	[1,1,-0.01,[0, 0, 0, 0],[1, 1, 1, 1],[0, 0, 0, 1]];
	_hndl ppEffectCommit 10;
	waitUntil {ppEffectCommitted _hndl};
	ppEffectDestroy _hndl;
};
playSound "welcome";
showCinemaBorder true;
camUseNVG false;
for "_x" from 0 to 20 do {
	_x cutRsc ["RageCoreintro","PLAIN"];
};
_camera = "camera" camCreate [(position player select 0)+5, position player select 1,(position player select 2)+_RageCoreIntroCameraDistance];
_camera cameraEffect ["internal","back"];
_camera camSetTarget vehicle player;
_camera camSetFOV 2.000;
_camera camCommit 6;
waitUntil {camCommitted _camera};
_camera camSetFOV 5.000;
_camera camSetTarget vehicle player;
_camera camSetRelPos [0,-10,20];
_camera camCommit 5.5;
waitUntil {camCommitted _camera};
_camera camSetFOV 3.000;
_camera camSetTarget vehicle player;
_camera camSetRelPos [0,-1.5,2];
_camera camCommit 4.5;
waitUntil {camCommitted _camera};
_camera camSetTarget vehicle player;
_camera camSetRelPos [0,-1,1.55];
_camera camCommit 2.35;
waitUntil {camCommitted _camera};
_camera camSetTarget vehicle player;
_camera camSetRelPos [0,-0.05,1.65];
_camera camCommit 1.25;
waitUntil {camCommitted _camera};
_camera cameraEffect ["terminate","back"];
camDestroy _camera;
showChat true;
showHud true;
showMap true;
life_NativeIntroDone = true;