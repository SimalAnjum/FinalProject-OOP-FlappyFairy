#include<SDL2/SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"
#pragma once

class heart : public Unit
{
    private:

    public:
        void fly(); // this will deal with the change in x and/or y coordinates.
        heart(); // default constructor
        heart(SDL_Rect x, SDL_Rect y); // overloaded constructor that initialises the x and y values of moverrect with the passed values.
        ~heart();
};