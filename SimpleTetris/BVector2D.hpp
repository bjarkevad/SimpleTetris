#ifndef BVECTOR2D_H
#define BVECTOR2D_H

template<typename T>
class BVector2D
{

   public:
      BVector2D(){}

      BVector2D(T _x, T _y)
      {
         SetX(_x);
         SetY(_y);
      }

      ~BVector2D(){}

      void SetX(T _x){x = _x;}
      void SetY(T _y){y = _y;}
      T GetX() {return x;}
      T GetY() {return y;}

   private:
      T x;
      T y;
};

#endif // BVECTOR2D_H
