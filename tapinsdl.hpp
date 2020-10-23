#ifndef _tapinsdl_header_imported_
#define _tapinsdl_header_imported_

#include <SDL.h>
#include <iostream>
#include <sstream>
#include <string>

namespace TapInSDL {

    class Character {
        public:
            void draw(SDL_Surface* screen);
            void express(std::string expression);
            Character(bool onLeft, std::string characterFolder);
        private:
            SDL_Surface* expressionImg;
            bool onLeftSide;
            std::string charFolder;
    };

}

#endif