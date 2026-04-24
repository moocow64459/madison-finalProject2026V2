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
    if (const auto* mouseEvent = event.getIf<sf::Event::MouseButtonPressed>()) {

        if (mouseEvent->button == sf::Mouse::Button::Left) {

            const float posX = static_cast<float>(sf::Mouse::getPosition(window).x);
            const float posY = static_cast<float>(sf::Mouse::getPosition(window).y);

            if (shape.getGlobalBounds().contains({posX, posY})) {
                std::cout << "Clicked\n";
                return true;

            }
        }
    }

    return false;
}