#include <stdio.h>

/**
 * main - blablabla
 *
 * Return: blablabla
*/

int main(void)
{
	int i, j, k;
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
			
			if (j > i && k > j && i != j && j != k)
			{		
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
			
				
				putchar(' ');
			
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

