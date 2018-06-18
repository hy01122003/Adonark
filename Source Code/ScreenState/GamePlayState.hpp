/*
**   Được lập trình bởi Harding Adonis
**   File GamePlayState.hpp
**   Ngày tạo: 15/06/2018
*/

#ifndef _GamePlayState_HPP_
#define _GamePlayState_HPP_

#include <Adonis/ScreenState.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "GameDataRef.hpp"
#include "../PathData.hpp"
#include "../ScreenGame/CrovaniaVillage.hpp"
#include "../ScreenGame/GamePlay/GamePlayDataRef.hpp"

namespace Adn
{
    class GamePlayState : public Ado::BaseState
    {
    private:
        GameDataRef             m_data;

    private:
        GamePlayDataRef         m_data_game;

        bool                    m_exit_game;

    public:
        GamePlayState(GameDataRef data);

        void init();

        void update();

        void draw();

        void handleEvent();
    };
}

#endif  //   _GamePlayState_HPP_