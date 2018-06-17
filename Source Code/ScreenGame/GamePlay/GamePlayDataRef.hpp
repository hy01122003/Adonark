/*
**   Được lập trình bởi Harding Adonis
**   File GamePlayDataRef.hpp
**   Ngày tạo: 17/06/2018
*/

#ifndef _GamePlayDataRef_HPP_
#define _GamePlayDataRef_HPP_

#include <Adonis/Utility/AssetsManager.hpp>
#include <SFML/Graphics.hpp>
#include <memory>
#include "GameManager.hpp"
#include "../../Engine/SoundsManager.hpp"
#include "../../Entity/Player/Player.hpp"

namespace Adn
{
    struct GamePlayData
    {
        sf::RenderTarget*        m_target;
        Ado::AssetsManager*      m_assets;
        SoundsManager*           m_sounds;
        GameManager              m_game;
        Player                   m_player;
    };

    typedef std::shared_ptr<GamePlayData> GamePlayDataRef;
}

#endif  //   _GamePlayDataRef_HPP_