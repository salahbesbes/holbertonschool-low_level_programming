#include <stdio.h>	

/**	
 * print_to_98 - returns the largest of 3 numbers	
 * @n: first integer	
 * Return: largest number	
 */	

void print_to_98(int n)	
{	
	int i;	

	if (n >= 98)	
	{	
		for (i = n; i >= 98; i--)	
		{	
			if (i == 98)	
				printf("%d", i);	
			else	
				printf("%d, ", i);	
		}	
	}	
	else	
	{	
		for (i = n; i <= 98; i++)	
		{	
			if (i == 98)	
				printf("%d", i);	
			else	
				printf("%d, ", i);	
		}	
	}	
	printf("\n");	
}
