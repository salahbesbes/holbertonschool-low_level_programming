#include<stdio.h>
/**
 * main - blablabla
 *
 * Return: blablabla
 */
int main(void)
{
	int i, x, y ,j, z, w;
	for (i = 0; i < 100; i++)
	{
		x = i / 10;
		y = i % 10;
		for (j = 0; j < 100; j++)
		{
			w = j / 10;
			z = j % 10;
			if (x < w && y < z)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(' ');
				putchar(w + '0');
				putchar(z + '0');
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
