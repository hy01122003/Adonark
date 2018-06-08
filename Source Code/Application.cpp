﻿//   Được lập trình bởi Harding Adonis
//   File Application.cpp
//   Ngày tạo: 05/06/2018

#include "Application.hpp"
#include "Icon.hpp"

namespace Adn
{
    Application::Application() :
        m_data(std::make_shared<GameData>()),
        m_time_a_frame(sf::seconds(1.f / 100.f)),
        m_all_frame(0)
    {
        this->m_data->m_window.create(sf::VideoMode(Screen_Width, Screen_Height), L"Adonark - Thế Giới Của Ma Thuật", sf::Style::Close);
        this->m_data->m_window.setFramerateLimit(Screen_Max_Frame);

        this->m_data->m_window.setIcon(icon.width, icon.width, icon.pixel_data);

        this->m_data->m_state.addState(Ado::BaseStateRef(new SplashState(this->m_data)));
    }

    void Application::run()
    {
        sf::Time timeLastFrame = sf::Time::Zero;
        sf::Clock timer;

        while (this->m_data->m_window.isOpen())
        {
            this->m_data->m_state.handleStateChange();

            this->m_data->m_state.getActiveState()->handleEvent();

            timeLastFrame += timer.restart();

            while (timeLastFrame > this->m_time_a_frame)
            {
                timeLastFrame -= this->m_time_a_frame;

                this->m_data->m_state.getActiveState()->handleEvent();
                this->m_data->m_state.getActiveState()->update();
            }

            this->m_data->m_state.getActiveState()->draw();

            this->m_all_frame++;
            if (this->m_timer.getElapsedTime().asSeconds() > 1.f)
            {
                this->m_timer.restart();
                system("cls");
                system("color C");
                std::cout << "Adonark:     FPS = " << this->m_all_frame << std::endl;
                this->m_all_frame = 0;
            }
        }
    }
}