private["_keypressed","_return"];
_keypressed = _this select 1;
_return = false;

#define ESC    1

// disable esc while in dialog
switch (_keypressed) do
{
    case ESC:
    {
        _return = true;
    };
};
_return;