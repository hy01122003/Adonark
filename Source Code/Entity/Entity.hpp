/*
**   Được lập trình bởi Harding Adonis
**   File Entity.hpp
**   Ngày tạo: 16/06/2018
*/

#ifndef _Entity_HPP_
#define _Entity_HPP_

#include <Adonis/Utility/Animation.hpp>
#include <SFML/Graphics.hpp>


namespace Adn
{
    /*
    **   Là class cơ sở cho các thực thể trong game
    */
    class Entity
    {
    protected:
        sf::Sprite          m_sprite;

        Ado::Animation      m_animation;

    public:

        virtual void draw(sf::RenderTarget& target)
        {
            target.draw(this->m_sprite);
        }

        void move(float x, float y);

        void setPosition(float x, float y);

        sf::Vector2f getPosition() const;

    };
}


#endif  //   _Entity_HPP_