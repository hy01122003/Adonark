//   Adonis Engine
//   Được lập trình bởi Harding Adonis

#ifndef _StateManager_Adonis_HPP_
#define _StateManager_Adonis_HPP_

#include <Adonis/ScreenState/BaseStateRef.hpp>
#include <stack>

namespace Ado
{
    class StateManager
    {
    private:
        std::stack<BaseStateRef>           m_all_state;

        BaseStateRef                       m_newState;

        bool                               m_checkAdd;
        bool                               m_checkRemove;
        bool                               m_checkReplace;

    public:
        StateManager();

        void addState(BaseStateRef newState, bool replace = true);

        void removeState();

        void handleStateChange();

        void removeAllState();

        BaseStateRef& getActiveState();
    };
}

#endif  //   _StateManager_Adonis_HPP_