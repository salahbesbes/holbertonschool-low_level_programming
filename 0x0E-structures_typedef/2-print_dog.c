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
		printf("NULL");
		return;
	}

	d->name ? printf("%s\n", d->name) : printf("(nil)\n");
	d->age ? printf("%f\n", d->age) : printf("(nil)\n");
	d->owner ? printf("%s\n", d->owner) : printf("(nil)\n");
}
