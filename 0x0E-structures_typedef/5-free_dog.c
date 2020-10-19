#include <stdio.h>
#include "dog.h"
#include <stdlib.h>


/**
* free_dog - free memory allocated for the struct dog
* @d: pointer type struct dog
*
* Return: void
*/

void free_dog(dog_t *d)
{
	free(d);
}