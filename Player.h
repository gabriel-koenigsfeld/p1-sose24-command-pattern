#pragma once
#include <SFML/Graphics.hpp>

class Player
{
public:
    Player();
    sf::CircleShape& getOctagon();

private:
    sf::CircleShape octagon;
};



