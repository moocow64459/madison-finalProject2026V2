#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics.hpp>


class Button : public sf::Drawable{
private:
    sf::RectangleShape shape;

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
public:
    Button();
    static void setButtonText(const std::string&);

    static void buttonClicked(sf::Vector2f, const sf::RectangleShape&);

    friend bool operator==(const sf::Window&, const sf::RectangleShape&);
};


#endif //BUTTON_H