//   Được lập trình bởi Harding Adonis
//   File MainMenuState.cpp
//   Ngày tạo: 07/06/2018

#include "MainMenuState.hpp"

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
        this->m_data->m_assets.loadFileFont(L"Font Pixel Việt Hóa", Path_Font + "Font_Pixel.ttf");

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

        //   Thêm hiệu ứng xuất hiện
        this->m_button_play->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));
        this->m_button_setting->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));
        this->m_button_information->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));
        this->m_button_exit->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));


        //   Chỉnh Font cho GUI
        //this->m_gui.setFont(this->m_data->m_assets.getFont(L"Font Pixel Việt Hóa"));

        //   GUI thêm các thành phần
        this->m_gui.add(this->m_button_play);
        this->m_gui.add(this->m_button_setting);
        this->m_gui.add(this->m_button_information);
        this->m_gui.add(this->m_button_exit);
    }

    void MainMenuState::update()
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && this->m_button_play->isFocused())
        {
            std::cout << "Vao Game\n";
        }

        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && this->m_button_setting->isFocused())
        {
            this->m_button_setting->setFocused(false);

            this->m_data->m_state.addState(Ado::BaseStateRef(new SettingState(this->m_data)), false);
        }

        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && this->m_button_information->isFocused())
        {
            this->m_button_information->setFocused(false);

            this->m_data->m_state.addState(Ado::BaseStateRef(new InforAboutGameState(this->m_data)), false);
        }

        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && this->m_button_exit->isFocused())
        {
            this->m_data->m_window.close();
        }
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

        this->m_gui.handleEvent(event);
    }
}