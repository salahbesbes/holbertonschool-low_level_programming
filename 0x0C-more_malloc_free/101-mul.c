#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>
/**
* main - multiply 2 numbers
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = 0, num2 = 0, mul, i;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (mul);
}
