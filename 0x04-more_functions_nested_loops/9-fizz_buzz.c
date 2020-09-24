#include <stdio.h>

/**
 * main - Fizz-Buzz program
 *
 * Return: always (0)
 */


int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		if (i % 15 == 0)
			printf("FizzBuzz ");
	}
	printf("\n");

	return (0);
}
