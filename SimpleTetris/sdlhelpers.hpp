#ifndef SDLHELPERS_HPP
#define SDLHELPERS_HPP
#include <SDL/SDL.h>

SDL_Surface* load_image(const char* filename);
void apply_surface(int x, int y, SDL_Surface* source, SDL_Surface* destination);
#endif // SDLHELPERS_HPP
