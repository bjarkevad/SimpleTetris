#include "renderer.hpp"

Renderer::Renderer()
{

}

Renderer::~Renderer()
{
    CleanUp();
}

bool Renderer::Init(int resX, int resY)
{
    if( SDL_Init(SDL_INIT_EVERYTHING) == -1 )
        return false;

    screen = SDL_SetVideoMode(resX, resY, 32, SDL_SWSURFACE);
    if(screen == nullptr)
        return false;

    SDL_WM_SetCaption("SimpleTetris", NULL);

    background = load_image("Art/background.bmp");
    level = load_image("Art/level.bmp");

    return true;
}

void Renderer::CleanUp()
{
    SDL_FreeSurface(background);
    SDL_Quit();
}

void Renderer::Render()
{
    //SDL_BlitSurface(background, NULL, screen, NULL);
    apply_surface(0, 0, background, screen);
    apply_surface(225, 50, level, screen);

    if(SDL_Flip(screen) == -1)
        return;

    SDL_Delay(2000);
}


