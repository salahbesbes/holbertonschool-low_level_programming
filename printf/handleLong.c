#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
* convertLongIntToAnybase - convert a long int to any base based on the char
* send
* @num: long int
* @chr: char correspondind to base
* Return: string
*/

int convertLongIntToAnyBase(unsigned long int num, char ch)
{
	char *bases = "0123456789abcdef";
	char *ptr = NULL, *buffer = NULL;
	unsigned int len = 0, base = 10;

	switch (ch)
	{
		case 'x':
			{
				base = 16;
				break;
			}
		case 'o':
			{
				base = 8;
				break;
			}
		case 'X':
			{
				bases = "0123456789ABCDEF";
				base = 16;
				break;
			}
		default:
			break;
	}
	buffer = malloc(sizeof(char) * 50);
	if (!buffer)
		return (-2);
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = bases[num % base];
		num /= base;
	} while (num != 0);
	len = _puts(ptr);
	free(buffer);
	return (len);
}
/**
* printLongUnsigned - print lu
* @valist: va_list arg
* @index: i
*
* Return: nb of char added
*/

int printLongUnsigned(va_list vaList, int *index, char ch)
{

	unsigned long int num;
	unsigned int len;
	unsigned long int nb;

	*index += 2;
	num = va_arg(vaList,  unsigned long int);
	nb = num;
	len = convertLongIntToAnyBase(nb, ch);
	return (len - 3);

}

/**
* printLongsigned - print lu
* @valist: va_list arg
* @index: i
*
* Return: nb of char added
*/

int printLongSigned(va_list vaList, int *index, char ch)
{

	long int num;
	unsigned int len;
	unsigned long int nb;
	
	*index += 2;
	num = va_arg(vaList, long int);


	if (num < 0)
	{
		nb = -num;
		_putchar('-');
		len = convertLongIntToAnyBase(nb, ch);
		return (len + 1 - 3);
	}

	len = convertLongIntToAnyBase(num, ch);
	return (len - 3);
}
