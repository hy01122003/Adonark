//   Được lập trình bởi Harding Adonis
//   File SettingState.hpp
//   Ngày tạo: 11/06/2018

#ifndef _SettingState_HPP_
#define _SettingState_HPP_

#include <Adonis/ScreenState.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "GameDataRef.hpp"
#include "../PathData.hpp"

namespace Adn
{
    class SettingState : public Ado::BaseState
    {
    private:
        GameDataRef               m_data;

    private:
        sf::Text                  m_title;

    public:
        SettingState(GameDataRef data);

        void init();

        void update();

        void draw();

        void handleEvent();

    };
}

#endif  //   _SettingState_HPP_