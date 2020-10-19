#ifndef GARD
#define GARD
/**
 * struct dog - Structure for doc
 * @name: str-> his name
 * @age: float -> his age
 * @owner: str -> his owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
