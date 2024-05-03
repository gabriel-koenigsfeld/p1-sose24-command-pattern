#include <SFML/Graphics.hpp>
#include "InputHandler.h"

int main() {
    sf::RenderWindow window(
        sf::VideoMode(800, 600),
        "Command Pattern Practice",
        sf::Style::None);

    InputHandler inputHandler;
    Player player;

    while (window.isOpen())
    {
        window.clear(sf::Color::White);
        window.draw(player.getOctagon());

        inputHandler.handleInput(player);

        window.display();
    }
    return 0;
}

void InputHandler::handleInput(Player& player) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        buttonLeft->execute(player);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        buttonRight->execute(player);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        buttonUp->execute(player);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
        buttonDown->execute(player);
    }
}
