/*
Fuegt einen 'Personalausweis' hinzu, den man ueber scrollen Zivilisten zeigen kann
*/

private["_target", "_message","_rang"];

_target = cursorTarget;

if(!license_civ_ausweis) exitWith
{
	hint "Du beseitzt keinen Personalausweis!";
};

if( isNull _target) then {_target = player;};

if( !(_target isKindOf "Man") ) then {_target = player;};

if( !(alive _target) ) then {_target = player;};

_rang = "Ausweis gültig!";

_message = format["<t size='1.5'>Personalausweis</t><br/>Name:<br/><t size='1.2'>%1</t><br/>Herkunft:<br/>Altis<br/><t size='1.2'>%2</t><br/>", name player, _rang];

[[player, _message],"life_fnc_civLicenseShown",_target,false] spawn life_fnc_MP;
