#pragma once
#include "Player.h"

class Command
{
public:
    virtual ~Command() {};
    virtual void execute(Player& player) = 0;
};

class LeftCommand : public Command
{
public:
    virtual void execute(Player& player) {
        player.getOctagon().move(-4, 0);
    };
};

class RightCommand : public Command
{
public:
    virtual void execute(Player& player) {
        player.getOctagon().move(4, 0);
    };
};

class UpCommand : public Command
{
public:
    virtual void execute(Player& player) {
        player.getOctagon().move(0, -4);
    };
};

class DownCommand : public Command
{
public:
    virtual void execute(Player& player) {
        player.getOctagon().move(0, 4);
    };
};