#include<stdio.h>
/**
 * main - blalala
 *
 * Return: blabala
 */



int main(void)
{
	int i, x, y, j, z, w;

	for (i = 0; i < 100; i++)
	{
		x = i / 10;
		y = i % 10;
		for (j = i + 1; j < 100; j++)
		{
			w = j / 10;
			z = j % 10;
			putchar(x + '0');
			putchar(y + '0');
			putchar(' ');
			putchar(w + '0');
			putchar(z + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

