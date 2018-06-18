/*
**   Được lập trình bởi Harding Adonis
**   File CrovaniaVillage.cpp
**   Ngày tạo: 16/06/2018
*/

#include "CrovaniaVillage.hpp"
#include <iostream>
namespace Adn
{
    CrovaniaVillage::CrovaniaVillage(GamePlayDataRef data) :
        m_data(data)
    {

    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CrovaniaVillage::loadData()
    {
        this->m_data->m_assets->loadFileTexture("PlayerSprite", Path_Texture_Entity + "PlayerSprite.png");

        this->m_data->m_assets->loadFileTexture("CrovaniaVillage", Path_Texture_Map + "CrovaniaVillage.png");
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CrovaniaVillage::init()
    {
        this->loadData();

        this->m_data->m_player.create(this->m_data->m_assets->getTexture("PlayerSprite"));

        this->m_view.setSize(Screen_Width, Screen_Height);

        this->m_view.setCenter(this->m_data->m_player.getPosition());

        this->m_sprite_map.setTexture(this->m_data->m_assets->getTexture("CrovaniaVillage"));
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CrovaniaVillage::update()
    {
        this->m_data->m_player.update();

        this->m_view.setCenter(this->m_data->m_player.getPosition());

        if (this->m_view.getCenter().x >= 400 || this->m_view.getCenter().y >= 250 || this->m_view.getCenter().x <= 2800 || this->m_view.getCenter().y <= 1750)


            this->m_data->m_target->setView(this->m_view);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CrovaniaVillage::draw()
    {
        this->m_data->m_target->draw(this->m_sprite_map);

        this->m_data->m_player.draw(this->m_data->m_target);
    }
}