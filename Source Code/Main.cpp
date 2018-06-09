#include <SFML/Graphics.hpp>
#include <Adonis/Utility.hpp>
#include <iostream>
#include "Application.hpp"

int main(int argc, char* argv[])
{
    //Adn::Application application;

    //application.run();

    sf::RenderWindow window(sf::VideoMode(500, 500), "TGUI", sf::Style::Close);
    window.setFramerateLimit(60);

    tgui::Gui gui(window);

    tgui::Button::Ptr button;
    button = tgui::Button::create(L"Xin Chào Thế Giới");

    sf::Font font;
    font.loadFromFile("Fonts.ttf");

    gui.setFont(font);

    auto editBox = tgui::EditBox::create();
    editBox->setPosition(tgui::Layout2d(100, 100));

    gui.add(button);
    gui.add(editBox, L"Thử Nghiệm");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                window.close();

            gui.handleEvent(event);
        }

        window.clear();

        gui.draw();

        window.display();
    }

    return EXIT_SUCCESS;
}