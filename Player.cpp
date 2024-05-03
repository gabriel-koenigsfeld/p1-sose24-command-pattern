#include "Player.h"

Player::Player() : octagon(80, 8) {

    octagon.setFillColor(sf::Color::Black);
    octagon.setPosition(380,280);
    octagon.setOrigin(80.f,80.f);
}

sf::CircleShape& Player::getOctagon() {
    return octagon;
}