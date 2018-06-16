/*
**   Được lập trình bởi Harding Adonis
**   File CrovaniaVillage.cpp
**   Ngày tạo: 16/06/2018
*/

#include "CrovaniaVillage.hpp"

namespace Adn
{
    CrovaniaVillage::CrovaniaVillage(sf::RenderTarget* target, Ado::AssetsManager& assets)
    {
        this->m_target = target;

        this->m_assets = assets;

        this->m_view.setSize(Screen_Width, Screen_Height);

        this->loadData();

        this->m_player.create(this->m_assets.getTexture("PlayerSprite"));
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CrovaniaVillage::loadData()
    {
        this->m_assets.loadFileTexture("PlayerSprite", Path_Texture_Entity + "PlayerSprite.png");
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CrovaniaVillage::update()
    {
        this->m_player.update();

        this->m_view.setCenter(this->m_player.getPosition());

        this->m_target->setView(this->m_view);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CrovaniaVillage::draw()
    {
        this->m_player.draw(*this->m_target);
    }
}