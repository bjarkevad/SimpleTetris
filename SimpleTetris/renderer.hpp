#ifndef RENDERER_HPP
#define RENDERER_HPP
#include <SDL/SDL.h>
#include <string>

#include "sdlhelpers.hpp"

class Renderer
{
public:
    Renderer();
    ~Renderer();
    bool Init(int resX, int resY);
    void CleanUp();
    void Render();
private:
    SDL_Surface* screen;
    SDL_Surface* background;
    SDL_Surface* level;
    SDL_Surface* blocks[];
};

#endif // RENDERER_HPP
