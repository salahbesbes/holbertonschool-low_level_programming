#include <stdio.h>
#define UNUSED(x) (void)(x)


/**
* main - print the name of the execution file
* print the name of execution file even when we rename it
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}

