#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics.hpp>


class Button : public sf::Drawable{
private:
    sf::RectangleShape shape;

    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

public:
    Button(float, float);
    void setButtonTexture(const sf::Texture&);

    bool isClicked(const sf::Event&, const sf::RenderWindow&) const;
};


#endif //BUTTON_H