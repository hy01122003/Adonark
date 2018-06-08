//   Được lập trình bởi Harding Adonis
//   File SplashState.hpp
//   Ngày tạo: 05/06/2018

#ifndef _SplashState_HPP_
#define _SplashState_HPP_

#include <Adonis/ScreenState.hpp>
#include <SFML/Graphics.hpp>
#include "GameDataRef.hpp"
#include "MainMenuState.hpp"
#include "../PathData.hpp"

namespace Adn
{
    class SplashState : public Ado::BaseState
    {
    private:
        GameDataRef           m_data;

        sf::Sprite            m_sprite;

        sf::Clock             m_timer;

    public:
        SplashState(GameDataRef data);

        void init();

        void update();

        void handleEvent();

        void draw();
    };
}

#endif  //   _SplashState_HPP_