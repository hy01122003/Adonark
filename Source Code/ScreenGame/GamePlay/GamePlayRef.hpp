/*
**   Được lập trình bởi Harding Adonis
**   File GamePlayRef.hpp
**   Ngày tạo: 16/06/2018
*/

#ifndef _GamePlay_HPP_
#define _GamePlay_HPP_

#include <SFML/Graphics.hpp>
#include <memory>

namespace Adn
{
    class GamePlay
    {
    public:
        virtual void init() = 0;

        virtual void update() = 0;

        virtual void draw() = 0;

        virtual void pause() {}

        virtual void resume() {}
    };

    typedef std::unique_ptr<GamePlay> GamePlayRef;
}

#endif  //   _GamePlay_HPP_