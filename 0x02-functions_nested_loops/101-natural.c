#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void main(void)
{
	int i, sum1 = 0, sum2 = 0, resultat;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum1 += i;
		if (i % 5 == 0 && i % 3 != 0)
			sum2 += i;
	}
	resultat = sum1 + sum2;
	printf("%d\n",resultat);
}

