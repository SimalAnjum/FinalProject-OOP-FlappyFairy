#include <SDL2/SDL.h>
#include "Unit.hpp"
#pragma once

class gamewon: public Unit
{
    public:
        gamewon();
        void fly();
        ~gamewon();
};