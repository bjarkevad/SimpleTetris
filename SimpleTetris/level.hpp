#ifndef LEVEL_HPP
#define LEVEL_HPP
#include "block.hpp"

class Level
{
   public:
      Level(int _width, int _heigth);
      int GetWidth() {return width;}
      int GetHeight() {return height;}

   private:
      int width = 0;
      int height = 0;
};

#endif // LEVEL_HPP
