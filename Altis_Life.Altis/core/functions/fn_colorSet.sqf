disableSerialization;

private ['_selection','_Arr','_hndl','_opt','_display'];

_selection = _this select 1;

switch (_this select 0) do {
		
	case 1: {

		_Arr = [
			[0.88, 0.88, 0, [0.2, 0.29, 0.4, -0.22], [1, 1, 1, 1.3], [0.15, 0.09, 0.09, 0.0]], // Colorful
			[1, 1, 0, [0, 0, 0, -0.31],[1.9, 1.9, 1.73, 0.7],[0.2, 1.1, -1.5, 1.64]], //Clear contrast 
			[1, 1, 0, [0.0, 0.0, 0.0, 0.0], [0.8*2, 0.5*2, 0.0, 0.7], [0.9, 0.9, 0.9, 0.0]], // Wasteland
			[1, 0.21, 0, [0.1, 0, 0, 0],[3.59, 3.49, 3.78, 0.83],[-0.31, 0.08, 3.79, 5]], // Dark draining
			[1,1,0,[0,0,0,0],[2,0,0,1.25],[2.5,-2.5,0,0]], // Summer Chernarus
			[1, 1, 0.01, [-0.11, -0.65, -0.76, 0.015],[-5, 2.74, 0.09, 0.95],[-1.14, -0.73, 1.14, -0.09]], // Tropical
			[1,1,0,[0,0,0,0],[1,1,1.2,0.85],[1,1,-2.5,0]], // Operation Flashpoint
			[1, 1.3, 0.001, [-0.11, -0.65, -0.76, 0.015],[-5, -1.74, 0.09, 0.86],[-1.14, -0.73, 1.14, -0.09]], // Africa
			[0.9, 1, 0, [-2.32, 0.17, 0.71, 0],[1.09, 0.91, 1.1, 0.27],[-1.24, 3.03, 0.37, -1.69]], // Blue
			[1.0, 1, -0.003, [0.2, 0.15, -0.0, 0.125],[-2, -1.5, -1, 0.55],[-0.54, -0.53, 0.4, -0.09]], // Arma mission colours
			[1, 1.04, -0.004, [0.0, 0.0, 0.0, 0.0], [1, 0.8, 0.6, 0.5], [0.199, 0.587, 0.114, 0.0]] //Heavy Colour Correction 
		];

		_hndl = ppEffectCreate ["colorCorrections", 1501];
		if (_selection >= 1 && _selection <= 11) then {
			_hndl ppEffectEnable true;
			_hndl ppEffectAdjust (_Arr select (_selection - 1));
		} else {
			_hndl ppEffectEnable false;
		};
		_hndl ppEffectCommit 0;
		
		TROR_GOTVars set [0,_selection];
		
	};
	
	case 2: {
	
		_Arr = [1200,1000,1500,1800];
		
		_opt = if (_selection >= 1 && _selection <= 3) then { _Arr select _selection } else { -1 };
		
		setViewDistance _opt;
		
		if (_opt == -1) then {
			setObjectViewDistance 1000;
		} else {
			setObjectViewDistance _opt;
		};
		
		TROR_GOTVars set [1,_selection];
	
	};
	
	case 3: {
	
		_opt = if (_selection == 1) then { true } else { false };
		
		_display = uiNamespace getVariable 'TROR_HUD';
				
		if !(isNull _display) then {
			{ (_display  displayCtrl _x) ctrlShow _opt;(_display  displayCtrl (_x + 10)) ctrlShow _opt; } forEach ([10200,1200,1000,1001,1002,1003,12010,12011,10202,1202]);
		};
	
		TROR_GOTVars set [2,_selection];
	
	};
		
};
if (_this select 2) then {
	[] spawn TROR_GOTInit;
};