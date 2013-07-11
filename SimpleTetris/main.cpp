#include <iostream>
#include "game.hpp"

using namespace std;

int main()
{
    auto renderer = new Renderer();
    auto game = new Game(renderer);

    if(game == nullptr)
    {
        cout << "Error initializing game, exiting.." << endl;
        return -1;
    }
    cout << "Game initialized successfully.." << endl;

    game->Start();

    delete game;
    return 0;
}

