//   Adonis Engine
//   Được lập trình bởi Harding Adonis

#include <Adonis/ScreenState/StateManager.hpp>

namespace Ado
{
    StateManager::StateManager() :
        m_checkAdd(false),
        m_checkRemove(false),
        m_checkReplace(false)
    {

    }

    void StateManager::addState(BaseStateRef newState, bool replace /* = true */)
    {
        this->m_checkAdd = true;

        this->m_checkReplace = replace;

        this->m_newState = std::move(newState);
    }

    void StateManager::removeState()
    {
        this->m_checkRemove = true;
    }

    void StateManager::handleStateChange()
    {
        if (this->m_checkRemove && !this->m_all_state.empty())
        {
            this->m_all_state.pop();

            if (this->m_all_state.empty())
                this->m_all_state.top()->resume();

            this->m_checkRemove = false;
        }

        if (this->m_checkAdd)
        {
            if (!this->m_all_state.empty())
            {
                if (this->m_checkReplace)
                    this->m_all_state.pop();
                else  this->m_all_state.top()->pause();
            }

            this->m_all_state.push(std::move(this->m_newState));
            this->m_all_state.top()->init();
            this->m_checkAdd = false;
        }
    }

    BaseStateRef& StateManager::getActiveState()
    {
        return this->m_all_state.top();
    }
}