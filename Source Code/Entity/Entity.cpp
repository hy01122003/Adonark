/*
**   Được lập trình bởi Harding Adonis
**   File Entity.hpp
**   Ngày tạo: 16/06/2018
*/

#include "Entity.hpp"

namespace Adn
{
    void Entity::move(float x, float y)
    {
        this->m_sprite.move(x, y);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Entity::setPosition(float x, float y)
    {
        this->m_sprite.setPosition(x, y);
    }
}