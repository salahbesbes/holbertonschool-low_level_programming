#ifndef GARD
#define GARD
/**
 * struct dog - Structure for doc
 * @name: str-> his name
 * @age: float -> his age
 * @owner: str -> his owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
<<<<<<< HEAD
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void _putchar(char c);
=======

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void _putchar(char c);

>>>>>>> c2c734b... fix any diff
#endif
