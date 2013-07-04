#include "block.hpp"

Block::Block(BlockType _blockType)
{
   switch(_blockType)
   {
      case Cube:
         this->blocksize = 4;
         this->blocknodes = new BVector2D<int>[this->blocksize];
         blocknodes[0] = BVector2D<int>(0,0);
         blocknodes[1] = BVector2D<int>(0,1);
         blocknodes[2] = BVector2D<int>(1,0);
         blocknodes[3] = BVector2D<int>(1,1);
         break;
      case Long:
         this->blocksize = 4;
         this->blocknodes = new BVector2D<int>[this->blocksize];
         blocknodes[0] = BVector2D<int>(0,0);
         blocknodes[1] = BVector2D<int>(0,1);
         blocknodes[2] = BVector2D<int>(0,2);
         blocknodes[3] = BVector2D<int>(0,3);
         break;
     default:
         break;
   }
}
