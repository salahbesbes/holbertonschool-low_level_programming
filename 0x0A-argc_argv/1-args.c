#include <stdio.h>

/**
* main - prints the number of arguments passed
* prints number of argspassed
* @argc: nb of arguments
* @argv: arguments
*
* Return: number
* Error:-1
*/

int main(int argc, char *argv[])
{
	printf("print %d", argc - 1);
	return (0);
}

