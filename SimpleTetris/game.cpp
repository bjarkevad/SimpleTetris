#include "game.hpp"

Game::Game(Renderer* _renderer): renderer(_renderer)
{
    if(! renderer->Init(800,600))
        this->~Game();
}

Game::~Game()
{
    delete renderer;
}

void Game::Start()
{
    while(1)
    {
        renderer->Render();
    }
}
