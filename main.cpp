#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    // Create the main window
    sf::RenderWindow window(desktop, "Final Project WORKING TITLE", sf::Style::Close);

    window.setPosition(sf::Vector2i(-10,0));

    sf::Font pixelFont("Assets/Fonts/PublicPixel.ttf");
    sf::Text text(pixelFont);
    text.setCharacterSize(50);
    text.setFillColor(sf::Color::White);

    text.setString("Hello world");

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
               window.close();
        }

        // Clear screen
        window.clear();

        window.draw(text);

        // Update the window
        window.display();
    }
}