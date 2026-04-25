#include "Button.h"

#include <iostream>

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(shape, states);
}

Button::Button() : shape(sf::Vector2f(512, 108)) {
    shape.setOrigin({256, 54});
    shape.setPosition({960, 544});
    shape.setFillColor(sf::Color::White);
}

void Button::setButtonText(const std::string&) {
    //sf::Text text()
}

bool Button::isClicked(const sf::Event& event, const sf::RenderWindow& window) {
    if (const auto* mouseButtonPressed = event.getIf<sf::Event::MouseButtonPressed>()) {
        if (mouseButtonPressed->button == sf::Mouse::Button::Left) {
            return true;
        }
    }
}