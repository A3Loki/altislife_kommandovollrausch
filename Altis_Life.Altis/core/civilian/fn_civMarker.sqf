//private["_markers"];

if((player getVariable "restrained")) exitWith {};
if((player getVariable "civrestrained")) exitWith {};

private["_markers","_cops"];
_markers = [];
_cops = [player];

sleep 0.5;
if(visibleMap) then {
	
	//Create markers
	{
		_marker = createMarkerLocal [format["%1_marker",_x],visiblePosition _x];
		_marker setMarkerColorLocal "ColorCivilian";
		_marker setMarkerTypeLocal "mil_arrow2";
		_marker setMarkerTextLocal format["%1", _x getVariable["realname",name _x]];
		_markers pushBack [_marker,_x];
	} foreach _cops;
		
	while {visibleMap} do
	{
		{
			private["_marker","_unit"];
			_marker = _x select 0;
			_unit = _x select 1;
			if(!isNil "_unit") then
			{
				if(!isNull _unit) then
				{
					_marker setMarkerPosLocal (visiblePosition _unit);
					_marker setMarkerDirLocal (getDir _unit);
				};
			};
		} foreach _markers;
		if(!visibleMap) exitWith {};
		sleep 0.6;
	};

	{deleteMarkerLocal (_x select 0);} foreach _markers;
	_markers = [];
	_cops = [];
};

/*
sleep 0.5;

_marker = createMarkerLocal [format["%1_civ_posi",player],getPos (player)];
_marker setMarkerColorLocal "ColorRed";
_marker setMarkerTypeLocal "mil_arrow";
_marker setMarkerTextLocal format["%1", player getVariable["realname",name player]];
_marker setMarkerDir (getDir player);
				
while {visibleMap} do {					 
	_marker setMarkerPosLocal (visiblePosition player);		
	_marker setMarkerDir (getDir player);	
	sleep 1;
	if(!visibleMap) exitWith {};
	if((player getVariable "restrained")) exitWith {};
	if((player getVariable "civrestrained")) exitWith {};
};

deleteMarkerLocal _marker;