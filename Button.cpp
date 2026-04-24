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

void Button::buttonClicked(const sf::Vector2f mousePosition, const sf::RectangleShape &button) {
    sf::Font font("Assets/Fonts/PublicPixel.ttf");
    sf::Text text(font);

    if (mousePosition == button.getPosition()) {
        text.setString("You did it");
    }
    else {
        text.setString("something is wrong");
    }
}

bool operator==(const sf::Window &window, const sf::RectangleShape &button) {
    // is the mouse position == to the button area
    // get the mouse x 704 <= x <= 1216
    const float mousePosX = static_cast<float>(sf::Mouse::getPosition(window).x);
    const float negButtonPosX = button.getOrigin().x - 256;
    const float posButtonPosX = button.getOrigin().x + 256;

    // get mouse Y 490 <= y <= 598
    const float posY = static_cast<float>(sf::Mouse::getPosition(window).y);
    const float negButtonPosY = button.getOrigin().y - 54;
    const float posButtonPosY = button.getOrigin().y + 54;

    return (mousePosX >= negButtonPosX &&
        mousePosX <= posButtonPosX &&
        posY >= negButtonPosY &&
        posY <= posButtonPosY
        );
}
