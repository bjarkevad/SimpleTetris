#ifndef RENDERER_HPP
#define RENDERER_HPP
#include <SDL/SDL.h>
#include <string>

#include"block.hpp"
#include "sdlhelpers.hpp"

#define MAX_BLOCKS 32

class Renderer
{
public:
    Renderer();
    ~Renderer();
    bool Init(int resX, int resY);
    void CleanUp();
    void AddBlock(Block& block);
    void RenderScene();
private:
    void RenderBlocks();

    SDL_Surface* screen;
    SDL_Surface* background;
    SDL_Surface* level;
    SDL_Surface* blocknode;

    Block *blocks[MAX_BLOCKS];
    int blockCount = 0;
};

#endif // RENDERER_HPP
