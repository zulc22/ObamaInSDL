#ifndef _tapinsdl_header_imported_
#define _tapinsdl_header_imported_

#include "SDL.h"
#include <string>

// for enums
#define s(e) e = std::string(#e)

enum CharacterSide {
    s(left), s(right)
};

enum CharacterExpression {
    s(default), s(inquisition), s(shock), s(annoyance), s(flustered)
};

class Character {
    public:
        void draw(CharacterSide s, SDL_Surface* screen);
        void express(CharacterExpression e);
    private:
        SDL_Surface* expression_img;
};

#endif