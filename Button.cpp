#include "Button.h"

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

void Button::buttonClicked(const sf::Vector2f mousePosition, const sf::RectangleShape &button) {
    sf::Vector2f buttonPosition = button.getPosition();
    bool isClicked = mousePosition == buttonPosition;
}

sf::Vector2f Button::getMouseVector2f(const sf::Window &window) const {
    float posX = static_cast<float>(sf::Mouse::getPosition(window).x);
    float posY = static_cast<float>(sf::Mouse::getPosition(window).y);
    return sf::Vector2f(posX, posY);
}