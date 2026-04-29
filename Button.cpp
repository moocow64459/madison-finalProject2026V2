#include "Button.h"

#include <iostream>

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(shape, states);
}

Button::Button(float xPos, float yPos) : shape(sf::Vector2f(512, 112)) {
    shape.setOrigin({256, 56});
    shape.setPosition({xPos, yPos});
}

void Button::setButtonTexture(const sf::Texture &texture) {
    shape.setTexture(&texture);
}

bool Button::isClicked(const sf::Event& event, const sf::RenderWindow& window) {
    if (const auto* mouseButtonPressed = event.getIf<sf::Event::MouseButtonPressed>()) {
        if (mouseButtonPressed->button == sf::Mouse::Button::Left) {
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
            sf::Vector2f mousePosF = window.mapPixelToCoords(mousePos);

            if (shape.getGlobalBounds().contains(mousePosF)) {
                return true;
            }
        }
    }
}