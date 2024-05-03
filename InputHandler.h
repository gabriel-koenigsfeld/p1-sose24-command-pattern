#pragma once
#include "Command.h"
#include "Player.h"

class InputHandler
{
public:
    InputHandler();
    void handleInput(Player& player);

private:
    LeftCommand* buttonLeft;
    RightCommand* buttonRight;
    UpCommand* buttonUp;
    DownCommand* buttonDown;
};
