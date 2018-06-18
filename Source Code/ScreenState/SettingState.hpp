//   Được lập trình bởi Harding Adonis
//   File SettingState.hpp
//   Ngày tạo: 11/06/2018

#ifndef _SettingState_HPP_
#define _SettingState_HPP_

#include <Adonis/ScreenState.hpp>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
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
        sf::Text                  m_content_sounds;
        sf::Text                  m_content_music;
        sf::Text                  m_content_FPS;


        tgui::Gui                 m_gui;

        tgui::Button::Ptr         m_button_back;

        tgui::Slider::Ptr         m_slider_sounds;

        tgui::Slider::Ptr         m_slider_music;

        tgui::Slider::Ptr         m_slider_FPS;

    private:
        void setupButton();

    public:
        SettingState(GameDataRef data);

        void init();

        void update();

        void draw();

        void handleEvent();

    };
}

#endif  //   _SettingState_HPP_