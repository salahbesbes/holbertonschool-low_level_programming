#include <stdio.h>


/**
* main - print the name of the execution file
* print the name of execution file even when we rename it
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("print %s\n", argv[0]);
	return (0);
}

