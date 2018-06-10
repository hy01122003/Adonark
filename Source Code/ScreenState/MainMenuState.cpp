//   Được lập trình bởi Harding Adonis
//   File MainMenuState.cpp
//   Ngày tạo: 07/06/2018

#include "MainMenuState.hpp"
#include <Windows.h>

namespace Adn
{
    MainMenuState::MainMenuState(GameDataRef data) :
        m_data(data),
        m_gui(m_data->m_window),
        m_button_play(tgui::Button::create(L"Chơi")),
        m_button_setting(tgui::Button::create(L"Cài Đặt")),
        m_button_information(tgui::Button::create(L"Thông Tin Game")),
        m_button_exit(tgui::Button::create(L"Thoát"))
    {
    }

    void MainMenuState::init()
    {
        this->m_data->m_assets.loadFileTexture(L"Tiêu Đề Game", Path_Texture_Graphics + "TitleGame.png");


        this->m_title_game.setTexture(this->m_data->m_assets.getTexture(L"Tiêu Đề Game"));
        this->m_title_game.setOrigin(250.f, 70.f);
        this->m_title_game.setPosition(Screen_Width / 2, Screen_Height / 2 - 160);

        this->m_button_play->setSize(200, 30);
        this->m_button_setting->setSize(200, 30);
        this->m_button_information->setSize(200, 30);
        this->m_button_exit->setSize(200, 30);

        this->m_button_play->setPosition(300, 180);
        this->m_button_setting->setPosition(300, 250);
        this->m_button_information->setPosition(300, 320);
        this->m_button_exit->setPosition(300, 390);

        //   GUI thêm các thành phần
        this->m_gui.add(this->m_button_play);
        this->m_gui.add(this->m_button_setting);
        this->m_gui.add(this->m_button_information);
        this->m_gui.add(this->m_button_exit);
    }
    void MainMenuState::update()
    {
    }

    void MainMenuState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data->m_window.draw(this->m_title_game);

        this->m_gui.draw();

        this->m_data->m_window.display();
    }

    void MainMenuState::handleEvent()
    {
        sf::Event event;

        while (this->m_data->m_window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                this->m_data->m_window.close();
        }
    }
}