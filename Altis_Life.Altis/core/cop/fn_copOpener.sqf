{
if (_x animationPhase "Door_1_rot" == 1) then {
_x animate ["Door_1_rot", 0];
}
else
{
_x animate ["Door_1_rot", 1];
};
} forEach (nearestObjects [player, ["Land_BarGate_F"], 25]); //25 = Radius, ReadTheFuckingCode.. ;)