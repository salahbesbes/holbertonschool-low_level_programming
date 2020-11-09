#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stddef.h>


/**
* convertLongIntToBase16 - convert a long int to base 16  and print it
* @num: long int
*
* Return: string
*/

int convertLongIntToBase16(long int num)
{
	char *bases = "0123456789abcdef";
	char *ptr = NULL, *buffer = NULL;
	unsigned int len = 0;

	buffer = malloc(sizeof(char) * 50);
	if (!buffer)
		return (-2);
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = bases[num % 16];
		num /= 16;
	} while (num != 0);
	*--ptr = 'x';
	*--ptr = '0';
	len = _puts(ptr);
	free(buffer);
	return (len);
}




/**
* handleP - print address of a variable
* @vaList: va_list
* @index: index
*
* Return: nb of char
*/

int handleP(va_list vaList, int *index)
{
	long int num;
	int len;

	*index += 2;
	num = va_arg(vaList, long int);

	if (!num)
	{
		_puts("(nil)");
		return (5 - 2);
	}
	if (num < 0)
	{
		len = _puts("0xffffffffffffffff");
		return (len - 2);
	}

	len = convertLongIntToBase16(num);

	return (len - 2);
}
