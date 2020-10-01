#include "holberton.h"

/**
 * leet - encoding a sting (leet)
 * @str: string
 *
 * Return: new string encoded
 */


char *leet(char *str)
{
	int leet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int correction[] = {3, 3, -2, -2, -7, -7, 3, 3, -3, -3};
	int i, j;
	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
			if (str[i] == leet[j])
			{
				str[i] = leet[j] % 8  + 48 +correction[j] ;
			}
	}
	return (str);
}
