/*
	File: fn_unrestrain.sqf
*/
private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit OR !(_unit getVariable["restrained",FALSE])) exitWith {}; //Error check?

if(playerSide == civilian) then
{
    life_action_inUse = true;
    _upp = localize "STR_NOTF_Unrestraining";
    disableSerialization;
    5 cutRsc ["life_progress","PLAIN"];
    _ui = uiNameSpace getVariable "life_progress";
    _progress = _ui displayCtrl 38201;
    _pgText = _ui displayCtrl 38202;
    _pgText ctrlSetText format["%2 (1%1)...","%",_upp];
    _progress progressSetPosition 0.01;
    _cP = 0.01;

    while{true} do
    {
        if(animationState player != "Acts_millerDisarming_deskCrouch_loop") then {
            [[player,"Acts_millerDisarming_deskCrouch_loop",true],"life_fnc_animSync",true,false] call life_fnc_MP;
            player switchMove "Acts_millerDisarming_deskCrouch_loop";
        };
        sleep 0.27;
        _cP = _cP + 0.01;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
        if(_cP >= 1) exitWith {};
        if(!alive player) exitWith {};
        if(player != vehicle player) exitWith {};
        if(life_interrupted) exitWith {};
    };

    life_action_inUse = false;
    5 cutText ["","PLAIN"];
    player switchMove "";
    if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
};

_unit setVariable["restrained",FALSE,TRUE];
_unit setVariable["Escorting",FALSE,TRUE];
_unit setVariable["transporting",FALSE,TRUE];
if(_unit getVariable["blindfolded",true]) then
    { [[_unit],"life_fnc_notBlind",_unit,false] spawn life_fnc_MP; };
//_unit removeEventhandler "KeyDown";
detach _unit;

//[[0,"STR_NOTF_Unrestrain",true,[_unit getVariable["realname",name _unit], profileName]],"life_fnc_broadcast",west,FALSE] call life_fnc_MP;