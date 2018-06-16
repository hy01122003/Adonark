//   Adonis Engine
//   Được lập trình bởi Harding Adonis

#include <Adonis/Utility/InputManager.hpp>
#include <iostream>
namespace Ado
{
    bool InputManager::checkSpriteClicked(const sf::RenderWindow& window, const sf::Sprite& sprite, sf::Mouse::Button button /* = sf::Mouse::Button::Left */)
    {
        if (sf::Mouse::isButtonPressed(button))
        {
            int x = window.getView().getCenter().x - window.getSize().x / 2;
            int y = window.getView().getCenter().y - window.getSize().y / 2;

            x = sprite.getGlobalBounds().left - x;
            y = sprite.getGlobalBounds().top - y;

            sf::IntRect temp(x, y, sprite.getGlobalBounds().width, sprite.getGlobalBounds().height);

            if (temp.contains(sf::Mouse::getPosition(window)))
                return true;
        }

        return false;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    bool InputManager::checkSpriteContainMouse(const sf::RenderWindow& window, const sf::Sprite& sprite)
    {
        int x = window.getView().getCenter().x - window.getSize().x / 2;
        int y = window.getView().getCenter().y - window.getSize().y / 2;

        x = sprite.getGlobalBounds().left - x;
        y = sprite.getGlobalBounds().top - y;

        sf::IntRect temp(x, y, sprite.getGlobalBounds().width, sprite.getGlobalBounds().height);

        if (temp.contains(sf::Mouse::getPosition(window)))
            return true;

        return false;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    bool InputManager::checkTextClicked(const sf::RenderWindow& window, const sf::Text& text, sf::Mouse::Button button /* = sf::Mouse::Button::Left */)
    {
        if (sf::Mouse::isButtonPressed(button))
        {
            int x = window.getView().getCenter().x - window.getSize().x / 2;
            int y = window.getView().getCenter().y - window.getSize().y / 2;

            x = text.getGlobalBounds().left - x;
            y = text.getGlobalBounds().top - y;

            sf::IntRect temp(x, y, text.getGlobalBounds().width, text.getGlobalBounds().height);

            if (temp.contains(sf::Mouse::getPosition(window)))
                return true;
        }

        return false;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    bool InputManager::checkTextContainMouse(const sf::RenderWindow& window, const sf::Text& text)
    {
        int x = window.getView().getCenter().x - window.getSize().x / 2;
        int y = window.getView().getCenter().y - window.getSize().y / 2;

        x = text.getGlobalBounds().left - x;
        y = text.getGlobalBounds().top - y;

        sf::IntRect temp(x, y, text.getGlobalBounds().width, text.getGlobalBounds().height);

        if (temp.contains(sf::Mouse::getPosition(window)))
            return true;

        return false;
    }
}