nclude "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/**
* _putchar - print a single char
* @c: char
*
* Return: int
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
* _puts - print a string
* @str: string
*
* Return: length of the string
*/

int _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
* _strlen - return the length of the string
* @str: string
*
* Return: length
*/

int _strlen(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	;
	return (i);
}

/**
* _printArrayOfStrings - print all string in an 2D array and return the nb of
* words
* @ptr: pointer to an array of strings
*
* Return: length
*/

int _printArrayOfStrings(char **ptr)
{
	int i = 0;

	for (i = 0; ptr[i]; i++)
		_puts(ptr[i]);
	return (i);
}

/**
* _copAlloc - allocate and copy string
* @str: string
*
* Return: new pointer to allocated string
*/

char *_copAlloc(char *str, gc *GC)
{

	int i = 0;
	char *ptr;

	if (!str || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	;
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		exit(98);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	/* ptr is initialized we can add it to GC */
	if (GC)
		_insertTo_GC(GC, ptr);

	return (ptr);
}

/**
* _insertTo_GC - when declaring a string in the heap this function take a
* pointer to that str (the string must be initialized ) and insert it to
* the struct (which is defined in the main) exactli in the array of string
* (null terminated) at last position and update the length (+1) so that can
* clear every thing at once
* @GC: pointer to the struct already initialized
* @str: string to be added
*
* Return: 0
*/

int _insertTo_GC(gc *GC, char *str)
{

	char **p;
	int *len = &(GC->length), i = 0;
	char *ptr = NULL, *tmp = NULL;

	if (!GC || !str)
		return (-1);
	p = GC->str_coll;
	/* insert new string in last position*/
	p[*len] = str;
	/* increment the length*/
	*len = *len + 1;
	/* NULL terminated array*/
	p[*len] = NULL;
	return (0);
}
/**
* _strConcatEnv - concatinate 2 string send with char in between
* if 0 is passed concat only 2 strings
* @str1: name of the envirnment variable
* @cop: the value of the var env
* @ch: char to concat in between
* @newGC: garbage collector pointer to make it easy wen freeing
* Return: pointer to an allocated path
*/

char *_strConcatEnv(char *str1, char *cop, int ch, gc *newGC)
{
	char *ptr1, *ptr2, *path;
	int len1, len2, length, i, j;

	if (!cop)
		cop = "nill";
	if (!str1)
		exit(98);
	len1 = _strlen(str1);
	len2 = _strlen(cop);


	length = len1 + len2 + 2;

	/* allocate */
	path = malloc(sizeof(char) * length);
	/* initialize it */
	for (i = 0, j = 0; i < length && cop[j]; i++)
	{
		if (i < len1)
			path[i] = str1[i];
		else if (i == len1 && ch)
		{
			path[i] = ch;
		}
		else if (i == len1 && !ch)
		{
			path[i] = cop[j];
			j++;
		}
		else
		{
			path[i] = cop[j];
			j++;
		}
	}
	path[i] = '\0';
	if (newGC)
		_insertTo_GC(newGC, path);
	else 
		printf("u are not allocating pls give none null pointer\n");
	return (path);
}
