#include "holberton.h"	

/**	
 * jack_bauer - check the code for Holberton School students.	
 *	
 * Return: Always 0.	
 */	


void jack_bauer(void)	
{	
	int i, j, x, y, w, z;	

	for (i = 0; i <= 23; i++)	
	{	
		x = i / 10;	
		y = i % 10;	

		for (j = 0; j < 60; j++)	
		{	
			w = j / 10;	
			z = j % 10;	

			_putchar(x + '0');	
			_putchar(y + '0');	
			_putchar(':');	
			_putchar(w + '0');	
			_putchar(z + '0');	
			_putchar('\n');	
		}	
	}	
}
