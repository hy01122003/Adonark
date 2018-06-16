/*
**   Được lập trình bởi Harding Adonis
**   File Player.hpp
**   Ngày tạo: 16/06/2018
*/

#ifndef _Player_HPP_
#define _Player_HPP_

#include <SFML/Graphics.hpp>
#include "../Entity.hpp"

namespace Adn
{
    class Player : public Entity
    {
    private:
        unsigned int          m_HP;
        unsigned int          m_MP;

        unsigned int          m_damage;

    public:
        Player();
        Player(sf::Texture& texture);

        void create(sf::Texture& texture);

        void update();

        unsigned int getHP() const;

        unsigned int getMP() const;

    };
}

#endif  //   _Player_HPP_
