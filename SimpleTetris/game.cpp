#include "game.hpp"

Game::Game(Renderer* _renderer): renderer(_renderer)
{
    renderer->Init(800,600);
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
