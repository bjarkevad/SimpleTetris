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
    blocknode = load_image("Art/node.bmp");

    return true;
}

void Renderer::CleanUp()
{
    SDL_FreeSurface(background);
    SDL_FreeSurface(level);
    SDL_FreeSurface(blocknode);

    for(int i = 0; i < blockCount; ++i)
    {
        delete blocks[i];
    }

    SDL_Quit();
}

void Renderer::AddBlock(Block& block)
{
    if(blockCount >= MAX_BLOCKS)
        return;

    if(block.surface == nullptr)
    {
        block.surface = blocknode;
    }

    blocks[blockCount] = &block;
    ++blockCount;
}

void Renderer::RenderScene()
{
    //SDL_BlitSurface(background, NULL, screen, NULL);
    apply_surface(0, 0, background, screen);
    apply_surface(225, 50, level, screen);

    RenderBlocks();

    if(SDL_Flip(screen) == -1)
        return;

    SDL_Delay(2000);
}

void Renderer::RenderBlocks()
{
    for(int i = 0; i < blockCount; ++i)
    {
        for(int i = 0; i < blocks[i]->blocksize; ++i)
        {
        }
        apply_surface(blocks[i]->coords->GetX() + 225, blocks[i]->coords->GetY() + 50,
                      blocks[i]->surface, screen);
    }
}

