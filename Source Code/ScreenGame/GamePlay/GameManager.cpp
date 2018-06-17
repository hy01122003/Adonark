/*
**   Được lập trình bỏi Harding Adonis
**   File GameManager.cpp
**   Ngày tạo: 17/06/2018
*/

#include "GameManager.hpp"

namespace Adn
{
    GameManager::GameManager() :
        m_checkAdd(false),
        m_checkRemove(false),
        m_checkReplace(false)
    {

    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GameManager::addGame(GamePlayRef newGame, bool replace /* = true */)
    {
        this->m_checkAdd = true;

        this->m_checkReplace = replace;

        this->m_newGame = std::move(newGame);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GameManager::removeGame()
    {
        this->m_checkRemove = true;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GameManager::removeAllGame()
    {
        while (!this->m_all_game.empty())
            this->m_all_game.pop();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GameManager::handleGameChange()
    {
        if (this->m_checkRemove && !this->m_all_game.empty())
        {
            this->m_all_game.pop();

            if (!this->m_all_game.empty())
                this->m_all_game.top()->resume();

            this->m_checkRemove = false;
        }


        if (this->m_checkAdd)
        {
            if (!this->m_all_game.empty())
            {
                if (this->m_checkReplace)
                    this->m_all_game.pop();
                else this->m_all_game.top()->pause();
            }

            this->m_all_game.push(std::move(this->m_newGame));
            this->m_all_game.top()->init();
            this->m_checkAdd = false;
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    GamePlayRef& GameManager::getActiveGame()
    {
        return this->m_all_game.top();
    }
}