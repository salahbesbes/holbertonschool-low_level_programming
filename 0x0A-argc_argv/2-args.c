#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
* main - prints all arguments
* prints all arguments
* @argc: nb of arguments
* @argv: arguments
*
* Return: strings
* Error: -1
*/



int main(int argc, char *argv[])
{
	UNUSED(argc);
	int i;

	for (i = 0; argv[i]; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
