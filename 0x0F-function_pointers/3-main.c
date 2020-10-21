#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - print result with FP
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[])
{
	int num1, num2;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num2 = atoi(argv[3]);
	num1 = atoi(argv[1]);

	int (*result)(int, int);

	result = get_op_func(argv[2]);

	if (!result || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(num1, num2));
	return (0);
}

