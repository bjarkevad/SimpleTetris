#include "renderer.hpp"

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
    CleanUp();
}

void Renderer::Init(int resX, int resY)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    screen = SDL_SetVideoMode(resX, resY, 32, SDL_SWSURFACE);
    hello = SDL_LoadBMP("Art/hello.bmp");
}

void Renderer::CleanUp()
{
    SDL_Quit();
}

void Renderer::Render()
{
    SDL_BlitSurface(hello, NULL, screen, NULL);
    SDL_Flip(screen);
    SDL_Delay(2000);
}

