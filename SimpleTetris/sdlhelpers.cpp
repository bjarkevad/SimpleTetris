#include "sdlhelpers.hpp"

SDL_Surface* load_image(const char* filename)
{
    SDL_Surface* loadedImage = nullptr;
    SDL_Surface* optimizedImage = nullptr;

    loadedImage = SDL_LoadBMP(filename);

    if(loadedImage != nullptr)
    {
        optimizedImage = SDL_DisplayFormat(loadedImage);
        SDL_FreeSurface(loadedImage);
    }

    return optimizedImage;
}

void apply_surface(int x, int y, SDL_Surface* source, SDL_Surface* destination)
{
    SDL_Rect offset;

    offset.x = x;
    offset.y = y;

    SDL_BlitSurface(source, NULL, destination, &offset);
}
