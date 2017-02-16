/*
	Author: Motombo
	Descrition: Sehr geehrte Damen und Herren, willkommen im kürzesten Script 2015!

disableUserInput false;
hint "Du kannst dich wieder bewegen";
*/


private ["_keypressed","_return"];
_keypressed = _this select 0;
_return = false;

#define ESC 1
#define Chat 53
#define Menu 21
#define inventory 23

switch(_keypressed) do
{
	case ESC: {_return = true;};
	case Chat: {_return = true;};
	case Menu: {_return = true;};
	case inventory {_return = true;};
};

_return;