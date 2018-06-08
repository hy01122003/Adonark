//   Adonis Engine
//   Được lập trình bởi Harding Adonis

#ifndef _BaseState_Adonis_HPP_
#define _BaseState_Adonis_HPP_

#include <memory>

namespace Ado
{
    class BaseState
    {
    public:
        virtual void init() = 0;

        virtual void handleEvent() = 0;

        virtual void update() = 0;
        
        virtual void draw() = 0;

        virtual void pause();

        virtual void resume();

    };

    typedef std::unique_ptr<BaseState> BaseStateRef;
}

#endif //   _BaseState_Adonis_HPP_