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

	newDog = malloc(sizeof(dog_t));
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
