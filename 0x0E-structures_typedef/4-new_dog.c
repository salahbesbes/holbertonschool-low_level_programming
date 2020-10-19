#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* new_dog - create and allocate a new instance of the structure (newDog)
* @name: str
* @age: float
* @owner: str
*
* Return: pointer to the structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *s_name, *s_owner;
	int i, lenName, lenOwner;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
	{
		free(newDog);
		return (NULL);
	}
	for (lenName = 0; name[lenName]; lenName++)
	;
	s_name = malloc(sizeof(*s_name) * (lenName + 1));
	if (!s_name)
	{
		free(s_name);
		free(newDog);
		return (NULL);
	}
	for (lenOwner = 0; owner[lenOwner]; lenOwner++)
	;
	s_owner = malloc(sizeof(char) * (lenOwner + 1));
	if (!s_owner)
	{
		free(s_owner);
		free(s_name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		s_name[i] = name[i];
	s_name[i] = '\0';
	newDog->name = s_name;
	newDog->age = age;
	for (i = 0; owner[i]; i++)
		s_owner[i] = owner[i];
	s_owner[i] = '\0';
	newDog->owner = s_owner;
	return (newDog);
}
