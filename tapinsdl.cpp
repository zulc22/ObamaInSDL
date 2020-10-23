#include "tapinsdl.hpp"

//#define SDLFLAGS SDL_FULLSCREEN | SDL_SWSURFACE // <- fullscreen is annoying
#define SDLFLAGS SDL_SWSURFACE

namespace TapInSDL {

    // Character Class Methods

    Character::Character(bool onLeft, std::string characterFolder) {

        onLeftSide = onLeft;
        charFolder = characterFolder;
        expressionImg = NULL;

        express("default");

    }

    void Character::express(std::string expression) {

        if (expressionImg != NULL) SDL_FreeSurface(expressionImg);

        std::ostringstream expressionPath;

        expressionPath <<
            "characters/" << charFolder << "/" <<
            expression << "-" << (onLeftSide ? "r" : "l") << ".bmp";
        
        expressionImg = SDL_LoadBMP( expressionPath.str().c_str() );
        
        assert(expressionImg != NULL);

    }

    void Character::draw(SDL_Surface* screen) {
        
        if (expressionImg == NULL) return; // Don't draw anything if there's no image

        int x;
        int y = (screen->h / 2) - (expressionImg->h / 2);
        
        if (onLeftSide) {
            // Draw on left side
            x = (screen->w / 3) - (expressionImg->w / 2);
        } else {
            // Draw on right side
            x = ((screen->w / 3) * 2) - (expressionImg->w / 2);
        }

        SDL_Rect charPos;
        charPos.h = expressionImg->h;
        charPos.w = expressionImg->w;
        charPos.x = x;
        charPos.y = y;
        
        SDL_BlitSurface(expressionImg, &expressionImg->clip_rect, screen, &charPos);

    }

    // Globals
    SDL_Surface* screen;
    SDL_AudioSpec* music;
    Character charLeft = Character(true, "Pip");
    Character charRight = Character(false, "Obama");

    int main(int argc, char* argv[])
    {
        SDL_Init(SDL_INIT_EVERYTHING);

    //  SDL_WM_SetCaption("Free Whaat?? Pre-Alpha", "game");
        screen = SDL_SetVideoMode(1024, 768, 32, SDLFLAGS);
        
        charLeft.draw(screen);
        charRight.draw(screen);
    //  SDL_BlitSurface(PlaceholderRoom, NULL, screen, NULL);
    //  SDL_BlitSurface(pip, NULL, screen, NULL);

        SDL_Flip(screen);

        SDL_Delay(2000);

        return 0;
    }

}

int main(int argc, char* argv[]) {
    return TapInSDL::main(argc, argv);
}