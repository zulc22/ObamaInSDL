#ifndef _tapinsdl_header_imported_
#define _tapinsdl_header_imported_

#include "SDL.h"

enum CharacterSide {
    left, right
};

enum CharacterExpression {
    default, inquisition, shock, annoyance, flustered
};

class Character {
    public:
        void draw(CharacterSide s, SDL_Surface* screen);
        void express(CharacterExpression e);
    private:
        SDL_Surface* expression_img;
};

#endif