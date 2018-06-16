//   Adonis Engine
//   Được lập trình bởi Harding Adonis

#ifndef _InputManager_Adonis_HPP_
#define _InputManager_Adonis_HPP_

#include <SFML/Graphics.hpp>

namespace Ado
{
    class InputManager
    {
    public:
        static bool checkSpriteClicked(const sf::RenderWindow& window, const sf::Sprite& sprite, sf::Mouse::Button button = sf::Mouse::Button::Left);

        static bool checkSpriteContainMouse(const sf::RenderWindow& window, const sf::Sprite& sprite);

        static bool checkTextClicked(const sf::RenderWindow& window, const sf::Text& text, sf::Mouse::Button button = sf::Mouse::Button::Left);

        static bool checkTextContainMouse(const sf::RenderWindow& window, const sf::Text& text);
    };
}

#endif //    _InputManager_Adonis_HPP_