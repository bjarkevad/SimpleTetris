#ifndef BLOCK_H
#define BLOCK_H
#include "BVector2D.hpp"
#include "SDL/SDL.h"

enum BlockType
{
   Long = 0,
   Cube =1
};

class Block
{
public:
    Block(BlockType _blockType);
    ~Block();

    BVector2D<int>  *coords;
    BVector2D<int>  *blocknodes;
    SDL_Surface     *surface;
    int             blocksize = 0;
};

#endif // BLOCK_H
