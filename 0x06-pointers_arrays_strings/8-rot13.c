#include "holberton.h"
#include <stdio.h>

/**
 * rotateBy13 - rotate the character by 13
 * @charr: int
 * @firstLetter: 'a' or 'A'
 *
 * Return: int
 */

int rotateBy13(int charr)
{
	if (charr >= 'A' && charr <= 'Z')
		charr = (((charr - 'A') + 13) % 26) + 'A';
	/*else if (charr >= 'a' && charr <= 'z')*/
	else	charr = (((charr - 'a') + 13) % 26) + 'a';
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
		str[i] = rotateBy13(str[i]);

	}
	return (str);
}

