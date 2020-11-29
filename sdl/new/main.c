#include "header.h"
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>

int main(int argc, char *argv[])
{
	SDL_Window *window = NULL;
	SDL_Surface *screenSurface = NULL;
	SDL_Surface *Image = NULL;
	bol  success = true;

	success = init(&window, &screenSurface);
	if (!success)
		fprintf(stderr, "cant init()\n");
	else
	{
		_infinit_loop(&window, &screenSurface, &Image);
		closeee(window, Image, screenSurface);
	}
    	return (success); 
}

