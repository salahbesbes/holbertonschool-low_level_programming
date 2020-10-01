#include "holberton.h"
#include <stdio.h>

/**
 * rot13 -  encode string wih rot13
 * @str: string
 *
 * Return: encodded string
 */
char *rot13(char *str)
{
	int i, j;
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}

