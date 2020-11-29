#include "header.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keycode.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>
/**
* X - 
* @a: 
*
* Return:
*/

SDL_Surface *get_Image(char *path)
{
	SDL_Surface *Image = NULL;

	Image = SDL_LoadBMP(path);
	if (!Image)
		printf("could not foun image : %s\n",SDL_GetError() );
	return (Image);
}
/**
* X - 
* @a: 
*
* Return:
*/

int init(SDL_Window **win, SDL_Surface **screanSurface)
{
	//Initialization flag
	bol success = true;

	//Initialize SDL
	if( SDL_Init(SDL_INIT_EVERYTHING) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		//Create window
		*win = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED,
				SDL_WINDOWPOS_UNDEFINED,
				_Width, _Height,
				0);
		if(*win == NULL)
		{
			printf( "Window could not be created! SDL_Error: %s\n",
					SDL_GetError() );
			success = false;
		}
		else
		{
			//Get window surface
			*screanSurface = SDL_GetWindowSurface(*win);
		}
	}
	return success;
}



/**
* load_images - we are filling an array of surface given with some images
* manually
* @KeyPressSurfaces: an array of surfaces 
*
* Return: 1/0
*/

int load_images(SDL_Surface **KeyPressSurfaces)
{
	int i = 0;
	bol success = true;

	/* filling an array of surface with images */
	KeyPressSurfaces[KEY_PRESS_SURFACE_UP] = get_Image("./up.bmp");
	KeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] = get_Image("./down.bmp");
	KeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] = get_Image("./left.bmp");
	KeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] = get_Image("./right.bmp");
	KeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] = get_Image("./press.bmp");

	/* check for errors */
	for (i = 0; i < KEY_PRESS_SURFACE_TOTAL; i++)
	{
		if (!KeyPressSurfaces[i])
		{
			success = false;
			break;
		}
	}
	return (success);
}

void closeee(SDL_Window *window, SDL_Surface *Image, SDL_Surface *screenSurface)
{
    //Deallocate surface
    	
	SDL_FreeSurface(Image);
	Image = NULL;

	SDL_FreeSurface(screenSurface);
	screenSurface = NULL;
	//Destroy window
	
	SDL_DestroyWindow(window);
	window = NULL;

	//Quit SDL subsystems
	SDL_Quit();
}

/**
* _surface_based_on_key - onClick we change the current surface to new surface (new image)
* @key_Pressed: key pressed (int)
* @current_surface: pointer to the current_surface
* @KeyPressSurfaces: array of screenSurface
*
* Return: int
*/

int _surface_based_on_key(int key_Pressed,
		SDL_Surface **current_surface,
		SDL_Surface **KeyPressSurfaces)
{
	switch (key_Pressed)
	{
		case SDLK_UP:
			*current_surface = KeyPressSurfaces[KEY_PRESS_SURFACE_UP];
			break;
		case SDLK_DOWN:
			*current_surface = KeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];
			break;
		case SDLK_RIGHT:
			*current_surface = KeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];
			break;
		case SDLK_LEFT:
			*current_surface = KeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];
			break;
		default:
			*current_surface = KeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];
			break;
	}
	return (1);
}

/**
* free_array_of_surface - free_array_of_surface
* @AOS: array of surface
* @length: length
* Return: void
*/

void free_array_of_surface(SDL_Surface **AOS, int length)
{
	int i = 0;

	if (!AOS)
		return;
	for (i = 0; i < length; i++)
	{
		if (AOS[i])
			SDL_FreeSurface(AOS[i]);
	}
	SDL_FreeSurface(*AOS);
}
/**
* _infinit_loop - 
* @win: window
* @screen: main screen
* @Image: 
* Return: void
*/

void _infinit_loop(SDL_Window **win, SDL_Surface **screen, SDL_Surface **Image)
{
	bol stop = false, success = true;
	//handle event
	SDL_Event e;
	SDL_Surface *KeyPressSurfaces[KEY_PRESS_SURFACE_TOTAL];
	SDL_Surface *current_surface = NULL;

	success = load_images(KeyPressSurfaces);
	current_surface = KeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];
	while (!stop)
	{
		if (!success)
		{
			fprintf(stderr, "we failed load all images \n");
			SDL_Delay(2000);
			break;
		}
		else
		{
			
			while (SDL_PollEvent(&e) != 0)
			{
				// User requests quit
				if (e.type == SDL_QUIT)
					stop = true;
				else if (e.type == SDL_KEYDOWN)
				{
					// select image based on key pressed
					success = _surface_based_on_key(e.key.keysym.sym,
							&current_surface,
							KeyPressSurfaces);
					if (success)
						break;
				}
				/*
				*/
			}
			//Apply the current image
			SDL_BlitSurface( current_surface, NULL, *screen, NULL );

			//Update the surface
			SDL_UpdateWindowSurface(*win);
		}
		
	}
	free_array_of_surface(KeyPressSurfaces, KEY_PRESS_SURFACE_TOTAL);
}
/*
*/
