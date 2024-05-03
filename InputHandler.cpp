#include "InputHandler.h"

InputHandler::InputHandler() {
    buttonLeft = new LeftCommand();
    buttonRight = new RightCommand();
    buttonUp= new UpCommand();
    buttonDown = new DownCommand();
}