//   Được lập trình bởi Harding Adonis
//   File MainMenuState.cpp
//   Ngày tạo: 07/06/2018

#include "MainMenuState.hpp"

namespace Adn
{
    MainMenuState::MainMenuState(GameDataRef data) :
        m_data(data),
        m_gui(this->m_data->m_window),
        m_button_play(tgui::Button::create(L"Vào Chơi")),
        m_button_setting(tgui::Button::create(L"Cài Đặt")),
        m_button_infor(tgui::Button::create(L"Thông Tin Game")),
        m_button_exit(tgui::Button::create(L"Thoát"))
    {
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void MainMenuState::setupButton()
    {
        this->m_button_play->setSize(200, 30);
        this->m_button_play->setPosition(300, 180);
        this->m_button_play->setTextSize(20);
        this->m_button_play->connect("pressed", [&]() {this->m_data->m_state.addState(Ado::BaseStateRef(new GamePlayState(this->m_data)), false); });
        this->m_button_play->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));

        this->m_button_setting->setSize(200, 30);
        this->m_button_setting->setPosition(300, 250);
        this->m_button_setting->setTextSize(20);
        this->m_button_setting->connect("pressed", [&]() {this->m_data->m_state.addState(Ado::BaseStateRef(new SettingState(this->m_data)), false); });
        this->m_button_setting->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));

        this->m_button_infor->setSize(200, 30);
        this->m_button_infor->setPosition(300, 320);
        this->m_button_infor->setTextSize(20);
        this->m_button_infor->connect("pressed", [&]() {this->m_data->m_state.addState(Ado::BaseStateRef(new InforAboutGameState(this->m_data)), false); });
        this->m_button_infor->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));

        this->m_button_exit->setSize(200, 30);
        this->m_button_exit->setPosition(300, 390);
        this->m_button_exit->setTextSize(20);
        this->m_button_exit->connect("pressed", [&]() {this->m_data->m_window.close(); });
        this->m_button_exit->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));


        this->m_gui.add(this->m_button_play);
        this->m_gui.add(this->m_button_setting);
        this->m_gui.add(this->m_button_infor);
        this->m_gui.add(this->m_button_exit);

        this->m_gui.setFont(this->m_data->m_assets.getFont(L"Font Goudytex"));
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void MainMenuState::loadData()
    {
        this->m_data->m_assets.loadFileTexture(L"Tiêu Đề Game", Path_Texture_Graphics + "TitleGame.png");

        this->m_data->m_assets.loadFileFont(L"Font Goudytex", Path_Font + "Goudytex.ttf");
        this->m_data->m_assets.loadFileFont(L"Font HLT GulyesaScript", Path_Font + "HLT_GulyesaScript.ttf");
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void MainMenuState::init()
    {
        this->loadData();


        this->m_title_game.setTexture(this->m_data->m_assets.getTexture(L"Tiêu Đề Game"));
        this->m_title_game.setOrigin(250.f, 70.f);
        this->m_title_game.setPosition(Screen_Width / 2, Screen_Height / 2 - 160);


        this->setupButton();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void MainMenuState::update()
    {

    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void MainMenuState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data->m_window.draw(this->m_title_game);

        this->m_gui.draw();

        this->m_data->m_window.display();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void MainMenuState::handleEvent()
    {
        sf::Event event;

        while (this->m_data->m_window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                this->m_data->m_window.close();

            this->m_gui.handleEvent(event);
        }
    }
}