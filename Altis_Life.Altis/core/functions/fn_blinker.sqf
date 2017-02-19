#include <macro.h>
private["_vehicle","_blinker","_pos","_blinkerType","_timestatus"];
_vehicle = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_blinker = [_this,1,Objnull,[Objnull]] call BIS_fnc_param;
_pos = [];
_blinkerType = "";
_timestatus = GVAR_UINS "time_status_day";
if(isNull _vehicle) exitWith {};
if(!(typeOf _vehicle in ["C_SUV_01_F"])) exitWith {};

switch (_blinker) do
{
  case 0: {
        if (!(_vehicle getVariable "blinkerLeft")) then
        {
            _vehicle setVariable["blinkerLeft",true,true];
            _vehicle setVariable["blinkerWarn",false,true];
            _vehicle setVariable["blinkerRight",false,true];
        } else
        {
            _vehicle setVariable["blinkerLeft",false,true];
        };
        _blinkerType = "blinkerLeft";
        _pos = [[-0.6, 2.0, -0.55],[-0.6, -2.77, -0.2]];
  };
  case 1: {
        if (!(_vehicle getVariable "blinkerRight")) then
        {
            _vehicle setVariable["blinkerRight",true,true];
            _vehicle setVariable["blinkerLeft",false,true];
            _vehicle setVariable["blinkerWarn",false,true];
        } else
        {
            _vehicle setVariable["blinkerRight",false,true];
        };
        _blinkerType = "blinkerRight";
        _pos = [[0.6, 2.0, -0.55],[0.6, -2.77, -0.2]];
  };
  case 2: {
        if (!(_vehicle getVariable "blinkerWarn")) then
        {
            _vehicle setVariable["blinkerWarn",true,true];
            _vehicle setVariable["blinkerLeft",false,true];
            _vehicle setVariable["blinkerRight",false,true];
        } else
        {
            _vehicle setVariable["blinkerWarn",false,true];
        };
        _blinkerType = "blinkerWarn";
        _pos = [[-0.6, 2.0, -0.55],[-0.6, -2.77, -0.2],[0.6, 2.0, -0.55],[0.6, -2.77, -0.2]];
  };
};

_lightYellow = [20, 20, 0.1];

_lightone_front = "#lightpoint" createVehicle getpos _vehicle;
sleep 0.2;
_lightone_front setLightColor _lightYellow;
_lightone_front setLightBrightness 0;
_lightone_front setLightAmbient [1,1,0.1];

_lightone_front lightAttachObject [_vehicle, _pos select 0];

_lightone_front setLightAttenuation [0.121, 0, 2000, 20];
_lightone_front setLightIntensity 1;
_lightone_front setLightFlareSize 0.1;
_lightone_front setLightFlareMaxDistance 10;
_lightone_front setLightUseFlare true;
_lightone_front setLightDayLight true;
_lightone_front setLightBrightness 0.2;

_lightone_back = "#lightpoint" createVehicle getpos _vehicle;
sleep 0.2;
_lightone_back setLightColor _lightYellow;
_lightone_back setLightBrightness 0;
_lightone_back setLightAmbient [1,1,0.1];

_lightone_back lightAttachObject [_vehicle, _pos select 1];

_lightone_back setLightAttenuation [0.121, 0, 2000, 20];
_lightone_back setLightIntensity 1;
_lightone_back setLightFlareSize 0.1;
_lightone_back setLightFlareMaxDistance 10;
_lightone_back setLightUseFlare false;
_lightone_back setLightDayLight true;
_lightone_back setLightBrightness 0.2;

if(_blinker == 2) then {
    _lighttwo_front = "#lightpoint" createVehicle getpos _vehicle;
    sleep 0.2;
    _lighttwo_front setLightColor _lightYellow;
    _lighttwo_front setLightBrightness 0;
    _lighttwo_front setLightAmbient [1,1,0.1];
    
    _lighttwo_front lightAttachObject [_vehicle, _pos select 2];
    
    _lighttwo_front setLightAttenuation [0.121, 0, 2000, 20];
    _lighttwo_front setLightIntensity 1;
    _lighttwo_front setLightFlareSize 0.1;
    _lighttwo_front setLightFlareMaxDistance 10;
    _lighttwo_front setLightUseFlare false;
    _lighttwo_front setLightDayLight true;
    _lighttwo_front setLightBrightness 0.2;
    
    _lighttwo_back = "#lightpoint" createVehicle getpos _vehicle;
    sleep 0.2;
    _lighttwo_back setLightColor _lightYellow;
    _lighttwo_back setLightBrightness 0;
    _lighttwo_back setLightAmbient [1,1,0.1];
    
    _lighttwo_back lightAttachObject [_vehicle, _pos select 3];
    
    _lighttwo_back setLightAttenuation [0.121, 0, 2000, 20];
    _lighttwo_back setLightIntensity 1;
    _lighttwo_back setLightFlareSize 0.1;
    _lighttwo_back setLightFlareMaxDistance 10;
    _lighttwo_back setLightUseFlare false;
    _lighttwo_back setLightDayLight true;
    _lighttwo_back setLightBrightness 0.2;
};

_leftYellow = true;
_brightnessfact = 0;

while{(alive _vehicle)} do
{
	if(!(_vehicle getVariable _blinkerType)) exitWith {};
	if(_leftYellow) then
	{
		_leftYellow = false;
		_lightone_front setLightBrightness 0.0;
		_lightone_back setLightBrightness 0.0;
		if(_blinker == 2) then {
		    _lighttwo_front setLightBrightness 0.0;
            _lighttwo_back setLightBrightness 0.0;
		};
	}
	else
	{
		_leftYellow = true;

        if(_timestatus) then {
         _brightnessfact = 25.75;
        } else {
         _brightnessfact = 1;
        };

        _lightone_front setLightBrightness _brightnessfact;
        _lightone_back setLightBrightness _brightnessfact;
        if(_blinker == 2) then {
            _lighttwo_front setLightBrightness _brightnessfact;
		    _lighttwo_back setLightBrightness _brightnessfact;
        };
	};
	sleep (0.5);
};
deleteVehicle _lightone_front;
deleteVehicle _lightone_back;
if(_blinker == 2) then {
    deleteVehicle _lighttwo_front;
    deleteVehicle _lighttwo_back;
};