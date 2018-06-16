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
        enum Status
        {
            Up,
            Down,
            Left,
            Right
        };

    private:
        Status                m_status;

    public:
        Player();
        Player(sf::Texture& texture);

        void create(sf::Texture& texture);

        void update();

        unsigned int getHP() const;

        unsigned int getMP() const;

        Status getStatus() const;

        void setState(Status status);

    };
}

#endif  //   _Player_HPP_
