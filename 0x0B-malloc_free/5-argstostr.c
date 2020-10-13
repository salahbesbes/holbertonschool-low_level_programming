
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
* ConcatStr - concat 2 str
* @p: long string
* @str: array of string
* Return: pointer to the String
*/

char *ConcatStr(char *p, char *str)
{
	int i = 0, j = 0;

	for (j = 0; p[j]; j++)
	;

	for (i = 0; str[i]; i++, j++)
	{
		p[j] = str[i];
	}
	p[j] = '\n';
	return (p);
}

/**
* argstostr - concatenates all the arguments of your program.
* @ac: number of arguments
* @av: arguments
*
* Return: astring
*/

char *argstostr(int ac, char **av)
{
	int i;
	char *p = malloc(1000);

	if (ac == 0 && av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		ConcatStr(p, av[i]);
	}
	return (p);
}

