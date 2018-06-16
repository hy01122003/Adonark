//   Được lập trình bởi Harding Adonis
//   File SettingState.cpp
//   Ngày tạo: 11/06/2018

#include "SettingState.hpp"

namespace Adn
{
    SettingState::SettingState(GameDataRef data) :
        m_data(data),
        m_title(L"Cài Đặt", this->m_data->m_assets.getFont("Font Goudytex"), 70),
        m_content_sounds(L"Âm thanh: " + std::to_wstring(this->m_data->m_sounds.getVolumeSounds()) + L"%", this->m_data->m_assets.getFont("Font HLT GulyesaScript"), 25),
        m_content_music(L"Nhạc nền: " + std::to_wstring(this->m_data->m_sounds.getVolumeMusic()) + L"%", this->m_data->m_assets.getFont("Font HLT GulyesaScript"), 25),
        m_content_FPS(L"Giới hạn FPS: " + std::to_wstring(Screen_Max_Frame), this->m_data->m_assets.getFont("Font HLT GulyesaScript"), 25),
        m_gui(this->m_data->m_window),
        m_button_back(tgui::Button::create(L"Trở về")),
        m_slider_sounds(tgui::Slider::create(0.f, 100.f)),
        m_slider_music(tgui::Slider::create(0.f, 100.f)),
        m_slider_FPS(tgui::Slider::create(10.f, 150.f))
    {
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void SettingState::setupButton()
    {
        this->m_button_back->setTextSize(20);
        this->m_button_back->setSize(100, 30);
        this->m_button_back->setPosition(50, 430);
        this->m_button_back->connect("pressed", [&]()
        {
            this->m_data->m_sounds.setVolume(this->m_slider_sounds->getValue(), this->m_slider_music->getValue());

            this->m_data->m_sounds.saveData();

            Screen_Max_Frame = int(this->m_slider_FPS->getValue());

            this->m_data->m_window.setFramerateLimit(Screen_Max_Frame);

            this->m_data->m_state.removeState(); 
        });
        this->m_button_back->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));


        this->m_slider_sounds->setSize(300, 15);
        this->m_slider_sounds->setPosition(320, 170);
        this->m_slider_sounds->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(500));
        this->m_slider_sounds->setValue(this->m_data->m_sounds.getVolumeSounds());


        this->m_slider_music->setSize(300, 15);
        this->m_slider_music->setPosition(320, 240);
        this->m_slider_music->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(500));
        this->m_slider_music->setValue(this->m_data->m_sounds.getVolumeMusic());


        this->m_slider_FPS->setSize(300, 15);
        this->m_slider_FPS->setPosition(320, 310);
        this->m_slider_FPS->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(500));
        this->m_slider_FPS->setValue(Screen_Max_Frame);


        this->m_gui.setFont(this->m_data->m_assets.getFont("Font Goudytex"));

        this->m_gui.add(this->m_button_back);
        this->m_gui.add(this->m_slider_sounds);
        this->m_gui.add(this->m_slider_music);
        this->m_gui.add(this->m_slider_FPS);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void SettingState::init()
    {
        this->m_title.setOrigin(this->m_title.getGlobalBounds().width / 2, this->m_title.getGlobalBounds().height / 2);
        this->m_title.setFillColor(sf::Color::Red);
        this->m_title.setPosition(Screen_Width / 2, Screen_Height / 2 - 210);


        this->m_content_sounds.setStyle(sf::Text::Style::Bold);
        this->m_content_sounds.setPosition(170, 160);


        this->m_content_music.setStyle(sf::Text::Style::Bold);
        this->m_content_music.setPosition(170, 230);


        this->m_content_FPS.setStyle(sf::Text::Style::Bold);
        this->m_content_FPS.setPosition(170, 300);
        
        this->setupButton();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void SettingState::update()
    {
        this->m_content_sounds.setString(L"Âm thanh: " + std::to_wstring(int(this->m_slider_sounds->getValue())) + L"%");

        this->m_content_music.setString(L"Nhạc nền: " + std::to_wstring(int(this->m_slider_music->getValue())) + L"%");

        this->m_content_FPS.setString(L"Giới hạn FPS: " + std::to_wstring(int(this->m_slider_FPS->getValue())));
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void SettingState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data->m_window.draw(this->m_title);

        this->m_data->m_window.draw(this->m_content_sounds);

        this->m_data->m_window.draw(this->m_content_music);

        this->m_data->m_window.draw(this->m_content_FPS);

        this->m_gui.draw();

        this->m_data->m_window.display();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void SettingState::handleEvent()
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