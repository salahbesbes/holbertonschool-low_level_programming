#include "holberton.h"
#include <stdio.h>

/**
 * rotateBy13 - rotate the character by 13
 * @charr: int
 * @firstLetter: 'a' or 'A'
 *
 * Return: int
 */

int rotateBy13(int charr, int firstLetter)
{
	charr = (((charr - firstLetter) + 13) % 26) + firstLetter;
	return (charr);
}
/**
 * rot13 -  encode string wih rot13
 * @str: string
 *
 * Return: encodded string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = rotateBy13(str[i], 65);
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = rotateBy13(str[i], 97);
	}
	return (str);
}

