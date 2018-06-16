/*
**   Được lập trình bởi Harding Adonis
**   File GamePlay.hpp
**   Ngày tạo: 16/06/2018
*/

#ifndef _GamePlay_HPP_
#define _GamePlay_HPP_

#include <SFML/Graphics.hpp>
#include "../Entity/Player/Player.hpp"

namespace Adn
{
    class GamePlay
    {
    protected:
        sf::RenderTarget*   m_target;

        Player              m_player;

    public:

        virtual void update() = 0;

        virtual void draw() = 0;
    };
}

#endif  //   _GamePlay_HPP_