/*
	File: initServer.sqf
	
	Description:
	Starts the initialization of the server.
*/
if(!(_this select 0)) exitWith {}; //Not server
[] call compile PreprocessFileLineNumbers "\life_server\init.sqf";


{  

	( ( _x select 0 ) nearestObject ( _x select 1 ) ) hideObjectGlobal true;

} forEach [

	[ [ 3637, 13079, 10 ], 1120805 ],
	[ [ 3628, 13076, 10 ], 1120878 ],		
	[ [ 3646, 13078, 10 ], 1120877 ],	
	[ [ 3656, 13077, 10 ], 1121121 ],
	[ [ 3656, 13077, 10 ], 1121150 ],
	[ [ 3656, 13077, 10 ], 1120802 ],
	[ [ 3685, 13100, 10 ], 1121213 ],
	[ [ 3656, 13077, 10 ], 1120875 ],
	[ [ 3685, 13101, 10 ], 1121217 ],
	[ [ 3684, 13119, 10 ], 1121215 ],
	[ [ 3657, 13077, 10 ], 1121119 ],
	[ [ 3657, 13077, 10 ], 1121148 ]
];

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