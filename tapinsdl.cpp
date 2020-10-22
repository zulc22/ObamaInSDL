#include "SDL.h"

//SDL_Event 

//#define SDLFLAGS SDL_FULLSCREEN | SDL_SWSURFACE // <- fullscreen is annoying
#define SDLFLAGS SDL_SWSURFACE



SDL_Surface* screen;

int main(int argc, char* argv[] )
{

    SDL_Surface* pip = NULL;
    SDL_Surface* screen = NULL;
    SDL_Surface* PlaceholderRoom = NULL;

    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_WM_SetCaption("Free Whaat?? Pre-Alpha", "game");
    screen = SDL_SetVideoMode(1024, 768, 32, SDLFLAGS);

    pip = SDL_LoadBMP("characters/Pip/pip.bmp");

    PlaceholderRoom = SDL_LoadBMP("bg/FemaleBullying.bmp");

    SDL_BlitSurface(PlaceholderRoom, NULL, screen, NULL);
    SDL_BlitSurface(pip, NULL, screen, NULL);

    SDL_Flip(screen);

    SDL_Delay(2000);

    return 0;
}
