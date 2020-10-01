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
	int correction[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
			if (str[i] == leet[j])
			{
				str[i] = correction[j] + 48;
				break;
			}
	}
	return (str);
}
