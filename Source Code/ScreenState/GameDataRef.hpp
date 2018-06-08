//   Được lập trình bởi Harding Adonis
//   File GameDataRef.hpp
//   Ngày tạo: 05/06/2018

#ifndef _GameDataRef_HPP_
#define _GameDataRef_HPP_

#include <Adonis/ScreenState.hpp>
#include <Adonis/Utility.hpp>
#include <SFML/Graphics.hpp>
#include <memory>

namespace Adn
{
    struct GameData
    {
        sf::RenderWindow            m_window;
        Ado::StateManager           m_state;
        Ado::AssetsManager          m_assets;
    };

    typedef std::shared_ptr<GameData> GameDataRef;
}

#endif  //   _GameDataRef_HPP_