#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_vehStoreItem.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Used in the vehicle trunk menu, stores the selected item and puts it in the vehicles virtual inventory
	if the vehicle has room for the item.
*/
private["_ctrl","_num","_ctrl2","_num2","_totalWeight","_itemWeight","_veh_data","_inv","_index","_val","_data","_old","_value","_weight","_diff","_calls", "_errorPut", "_errorTake"];
disableSerialization;

_ctrl = ctrlSelData(3503);
_ctrl2 = ctrlSelData(3502);

_num = 1;
_num2 = 1;

if(_ctrl == "" && _ctrl2 == "" ) exitWith {hint "No Items selected";};
if(_ctrl == _ctrl2 ) exitWith {hint "Identische Items nicht tauschbar";};
if(_ctrl == "goldbar" || _ctrl2 == "goldbar" ) exitWith {hint "Für Goldbarren gibt es diese Funktion nicht!";};
if(_ctrl == "money" || _ctrl2 == "money") exitWith {hint "Für Geld gibt es diese Funktion nicht!";};

_calls = 0;
while {_calls < 1000} do
{
	_errorPut = 0;
	_errorTake = 0;

	if(life_trunk_vehicle isKindOf "House_F") then {
		_mWeight = 0;
		{_mWeight = _mWeight + ([(typeOf _x)] call life_fnc_vehicleWeightCfg);} foreach (life_trunk_vehicle getVariable["containers",[]]);
		_totalWeight = [_mWeight,(life_trunk_vehicle getVariable["Trunk",[[],0]]) select 1];
	} else {
		_totalWeight = [life_trunk_vehicle] call life_fnc_vehicleWeight;
	};
	_itemWeight = ([_ctrl] call life_fnc_itemWeight) * _num;
	_veh_data = life_trunk_vehicle getVariable ["Trunk",[[],0]];
	_inv = _veh_data select 0;


	if(((_totalWeight select 1) + _itemWeight) > (_totalWeight select 0)) then
	{
		_errorPut = 1;
	}
	else {
		if(!([false,_ctrl,_num] call life_fnc_handleInv)) then
		{
			_errorPut = 2;
		}
		else
		{
			_index = [_ctrl,_inv] call TON_fnc_index;
			if(_index == -1) then
			{
				_inv pushBack [_ctrl,_num];
			}
				else
			{
				_val = _inv select _index select 1;
				_inv set[_index,[_ctrl,_val + _num]];
			};

			life_trunk_vehicle setVariable["Trunk",[_inv,(_veh_data select 1) + _itemWeight],true];
			[life_trunk_vehicle] call life_fnc_vehInventory;
		};
	};

	_index = [_ctrl2,((life_trunk_vehicle getVariable "Trunk") select 0)] call TON_fnc_index;
	_data = (life_trunk_vehicle getVariable "Trunk") select 0;
	_old = life_trunk_vehicle getVariable "Trunk";
	if(_index == -1) then {
		_errorTake = 1;
	}
	else {
		_value = _data select _index select 1;
		if(_num2 > _value) then
		{
			_errorTake = 2;
		}
		else
		{
			_num2 = [_ctrl2,_num2,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
			if(_num2 <= 0) then
			{
				_errorTake = 3;
			}
			else
			{
				_weight = ([_ctrl2] call life_fnc_itemWeight) * _num2;

				_data = (life_trunk_vehicle getVariable "Trunk") select 0;
				if([true,_ctrl2,_num2] call life_fnc_handleInv) then
				{
					if(_num2 == _value) then
					{
						_data set[_index,-1];
						_data = _data - [-1];
					}
						else
					{
						_data set[_index,[_ctrl2,(_value - _num2)]];
					};
					life_trunk_vehicle setVariable["Trunk",[_data,(_old select 1) - _weight],true];
					[life_trunk_vehicle] call life_fnc_vehInventory;
				}
					else
				{
					_errorTake = 4;
				};
			};
		};
	};
	if (_errorPut > 0 && _errorTake > 0) then
	{
		_calls = 1000;
		hint "Tausch abgeschlossen.";
	};
	_calls = _calls + 1;

};
