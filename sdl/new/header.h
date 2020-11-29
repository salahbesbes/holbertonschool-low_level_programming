#ifndef HEADER
#define HEADER

#define true 1
#define false 0
#define _Width 640
#define _Height 480
typedef int bol;

#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_test_images.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>
#include <stdlib.h>

enum KeyPressSurfaces
{
	KEY_PRESS_SURFACE_DEFAULT,
	KEY_PRESS_SURFACE_UP,
	KEY_PRESS_SURFACE_DOWN,
	KEY_PRESS_SURFACE_LEFT,
	KEY_PRESS_SURFACE_RIGHT,
	KEY_PRESS_SURFACE_TOTAL
};


/*
*/

int init(SDL_Window **win, SDL_Surface **screanSurface);
void closeee(SDL_Window *window, SDL_Surface *Image, SDL_Surface *screenSurface);
bol load_image(SDL_Surface **Image, SDL_Surface **screenSurface, SDL_Window **window);
void _infinit_loop(SDL_Window **win, SDL_Surface **sceen, SDL_Surface **Image);
#endif
