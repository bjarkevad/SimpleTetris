#ifndef BLOCK_H
#define BLOCK_H
#include "BVector2D.hpp"

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

      BVector2D<int> *blocknodes;
      int blocksize = 0;
   private:

};

#endif // BLOCK_H
