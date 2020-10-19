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
	if (!d)
	{
		return;
	}

	d->name ? printf("%s\n", d->name) : printf("name : (nil)\n");
	d->age ? printf("%f\n", d->age) : printf("age : (nil)\n");
	d->owner ? printf("%s\n", d->owner) : printf("owner : (nil)\n");
}
