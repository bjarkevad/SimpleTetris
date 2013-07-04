#ifndef RENDERER_HPP
#define RENDERER_HPP
#include <SDL/SDL.h>

class Renderer
{
public:
    Renderer();
    ~Renderer();
    void Init(int resX, int resY);
    void CleanUp();
    void Render();
private:
    SDL_Surface* screen;
    SDL_Surface* hello;
};

#endif // RENDERER_HPP
