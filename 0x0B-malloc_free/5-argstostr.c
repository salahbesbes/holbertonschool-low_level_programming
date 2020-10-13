#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
* X - 
* @a: 
* 
* Return:
*/

int lengthStr(char *str)
{
	int length;

	for (length = 0; str[length]; length++)
	;


	return (length);
}
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
	/*
	for (i = 0; p[i]; i++)
	{
		printf("p[%d] = %d\n", i, p[i]);
	}
	*/
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
	int i, totalLength = 0;
	char *p;

	if (ac == 0 && av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		totalLength += (lengthStr(av[i]) + 1);
	totalLength++;
	p = malloc(sizeof(char) * totalLength);
	p[totalLength] = '\0';
	for (i = 0; i < ac; i++)
		ConcatStr(p, av[i]);
	return (p);
}

