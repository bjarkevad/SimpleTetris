#ifndef GAME_HPP
#define GAME_HPP
#include "renderer.hpp"
#include "block.hpp"

class Game
{
public:
    Game(Renderer* _renderer);
    ~Game();
    void Start();
private:
    Renderer* renderer;
    Block* blocks[];
};

#endif // GAME_HPP
