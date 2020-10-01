# include "holberton.h"

/**
 * string_toupper - change string to Upercase
 * @str: string
 *
 * Return: string Uppercase
 */


char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
