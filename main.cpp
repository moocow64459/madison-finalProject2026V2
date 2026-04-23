#include <iostream>
#include <SFML/Audio/Music.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    // Create the main window
    sf::RenderWindow window(desktop, "Final Project WORKING TITLE", sf::Style::Close);

    //window.setIcon();
    window.setPosition(sf::Vector2i(-10,0));

    // Music
    sf::Music menuMusic("Assets/MainMenu/pixelmist.flac");
    menuMusic.setVolume(35);
    menuMusic.setLooping(true);
    menuMusic.play();

    // Background
    sf::RectangleShape background(sf::Vector2f(window.getSize().x, window.getSize().y));
    sf::Texture backgroundTexture("Assets/MainMenu/darknight.png");
    background.setTexture(&backgroundTexture);

    // Button
    sf::RectangleShape button(sf::Vector2f(200, 60));
    button.setPosition({300, 250});
    button.setFillColor(sf::Color::Blue);

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

        window.draw(background);

        // Update the window
        window.display();
    }
}