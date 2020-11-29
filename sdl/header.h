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


/*
*/
int load_media(void);
void close(void);
int init(void);

#endif
