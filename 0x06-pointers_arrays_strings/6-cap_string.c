#include "holberton.h"

/**
 * cap_string - capitalize every string after some special carachters
 * @str: string ( senthense )
 *
 * Return: new Synthese with capitalize words
 */


char *cap_string(char *str)
{

	int specialCaracter[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	int j;
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == specialCaracter[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}

		}
	}


	return (str);
}
