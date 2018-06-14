//   Được lập trình bởi Harding Adonis
//   File InforAboutGameState.hpp
//   Ngày tạo: 11/06/2018

#ifndef _InforAboutGameState_HPP_
#define _InforAboutGameState_HPP_

#include <Adonis/Utility/InputManager.hpp>
#include <Adonis/ScreenState.hpp>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <iostream>
#include "GameDataRef.hpp"
#include "../PathData.hpp"

namespace Adn
{
    class InforAboutGameState : public Ado::BaseState
    {
    private:
        GameDataRef             m_data;

    private:
        sf::Text                m_title;

        sf::Text                m_content_programer;
        sf::Text                m_content_project_manager;
        sf::Text                m_content_tester;
        sf::Text                m_content_designer;

        
        tgui::Gui               m_gui;

        tgui::Button::Ptr       m_button_back;


    private:
        void setupButton();

    public:
        InforAboutGameState(GameDataRef data);

        void init();

        void update();

        void draw();

        void handleEvent();

    };
}

#endif  //   _InforAboutGameState_HPP_