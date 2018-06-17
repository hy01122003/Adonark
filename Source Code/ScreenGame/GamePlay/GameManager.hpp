/*
**   Được lập trình bỏi Harding Adonis
**   File GameManager.cpp
**   Ngày tạo: 17/06/2018
*/

#ifndef _GameManager_HPP_
#define _GameManager_HPP_

#include <memory>
#include <stack>
#include "GamePlayRef.hpp"

namespace Adn
{
    class GameManager
    {
    private:
        std::stack<GamePlayRef>            m_all_game;

        GamePlayRef                        m_newGame;

        bool                               m_checkAdd;
        bool                               m_checkRemove;
        bool                               m_checkReplace;

    public:
        GameManager();

        void addGame(GamePlayRef newGame, bool replace = true);

        void removeGame();

        void removeAllGame();

        void handleGameChange();

        GamePlayRef& getActiveGame();

    };
}

#endif  //   _GameManager_HPP_