#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stddef.h>


/**
* checkFlagsForType - we check char after % if there is a special char
* representing the type if we found we return 1
* @c: char
*
* Return: 1
* Error: 0
*/

int checkFlagsForType(char c)
{
	char type[] = "sifxulcdbegouxXRrp";
	int i;

	for (i = 0; type[i]; i++)
	{
		if (c == type[i])
			return (1);
	}
	return (0);
}

/**
 * getAllFlags - we substruct all char between % and [d,f,s ...]
 * @pos: index
 * p: char*
 *
 * Return: char*
 */


char *getAllFlags(int pos, char *p)
{

	int i, j, nb, ok, len;
	char *newP;

	for (len = 0; p[len]; len++)
	;
	ok = 0;
	for (i = pos; p[i]; i++)
	{
		if (p[i] == '%')
		{
			for (j = 0; p[i + j]; j++)
			{
				ok = checkFlagsForType(p[i + j]);
				if (ok == 1)
				{
					nb = j + 1;
					break;
				}
			}
			break;
		}
	}

	if (nb == 0)
		return (NULL);
	newP = malloc(sizeof(char) * (nb + 1));

	for (j = 0; j < (nb + 1); j++)
	{
		newP[j] = p[pos + j + 1];
	}
	newP[j] = '\0';
	return (newP);
}

