#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, res = 0;

	for(i = 0; i < 1024; i++)
	{
		if (i % 5 == 0)
			res += i;
		if (i % 3 == 0)
			res += i;
	}
	printf("%d \n",res);
	
}
