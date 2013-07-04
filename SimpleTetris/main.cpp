#include <iostream>
#include "game.hpp"

using namespace std;

int main()
{
    Renderer* renderer = new Renderer();
    Game* game = new Game(renderer);

    game->Start();

    delete game;
    return 0;
}

