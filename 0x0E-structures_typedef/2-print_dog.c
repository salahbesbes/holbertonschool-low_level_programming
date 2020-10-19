#include <stdio.h>
#include "dog.h"


/**
* print_dog - print the structure dog
* @d: struct
*
* Return: void
*/

void print_dog(struct dog *d)
{
	
	if (d)
	{
		d->name != NULL ? printf("%s\n", d->name) : printf("name: (nil)\n");
		printf("%f\n", d->age);
		d->owner != NULL ? printf("%s\n", d->owner) : printf("owner: (nil)\n");
	}
}
