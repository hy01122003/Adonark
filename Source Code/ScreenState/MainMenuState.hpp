﻿//   Được lập trình bởi Harding Adonis
//   File MainMenuState.hpp
//   Ngày tạo: 07/06/2018

#ifndef _MainMenuState_HPP_
#define _MainMenuState_HPP_

#include <Adonis/ScreenState.hpp>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <iostream>
#include "GameDataRef.hpp"
#include "SettingState.hpp"
#include "InforAboutGameState.hpp"
#include "../PathData.hpp"

namespace Adn
{
    class MainMenuState : public Ado::BaseState
    {
    private:
        GameDataRef            m_data;

    private:
        sf::Sprite             m_title_game;

        tgui::Gui              m_gui;

        tgui::Button::Ptr      m_button_play;                    //   Vào trò chơi
        tgui::Button::Ptr      m_button_setting;                 //   Vào cài đặt
        tgui::Button::Ptr      m_button_information;             //   Vào thông tin trò chơi
        tgui::Button::Ptr      m_button_exit;                    //   Thoát game

    public:
        MainMenuState(GameDataRef data);

        void init();

        void update();

        void draw();

        void handleEvent();
    };
}

#endif  //   _MainMenuState_HPP_
