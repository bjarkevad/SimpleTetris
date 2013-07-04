#ifndef GAME_HPP
#define GAME_HPP
#include "renderer.hpp"

class Game
{
public:
    Game(Renderer* _renderer);
    ~Game();
    void Start();
private:
    Renderer* renderer;
};

#endif // GAME_HPP
