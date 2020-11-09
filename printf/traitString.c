#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stddef.h>



/**
* numToString - convert int ro string and print it
* @n: int
*
* Return: nb of char added
*/

int numToString(va_list vaList, int *index)
{
	int i = 0, m = 0, len = 0, n = 0;
	char *str;
	unsigned int nb;

	*index += 2;
	n = va_arg(vaList, int);

	nb = n < 0 ? -n : n;
	for (m = 0; nb > 0; nb /= 10, m++)
	;
	len = m - 1;
	if (n < 0)
	{
		nb = n < 0 ? -n : n;
		str = malloc(sizeof(char) * (m + 2));
		if (!str)
			return (-2);
		for (i = m; i > 0; i--, nb /= 10)
		{
			str[i] = (nb % 10) + '0';
		}
		str[m + 1] = '\0';
		str[0] = '-';
		len = _puts(str);

	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (1 - 2);
		}
		
		str = malloc(sizeof(char) * (m + 1));
		if (!str)
			return (-2);
		for (i = m - 1; i >= 0; i--, n /= 10)
			str[i] = (n % 10) + '0';
		str[m] = '\0';
		len = _puts(str);
	}
		free(str);
		return (len - 2);
}
/**
 * rev_string - everses a string.
 * @s: string
 * Return: string
 */
int rev_string(va_list vaList, int *index)
{
	int length = 0, i;
	char tmp, *newStr;

	*index += 2;
	newStr = va_arg(vaList, char*);
	newStr = strCopyAlloc(newStr);
	if (!newStr)
		return (-2);
	for (i = 0; newStr[i]; i++)
		length++;

	for (i = 0; i < length / 2; i++)
	{
		tmp = newStr[length - 1 - i];
		newStr[length - 1 - i] = newStr[i];
		newStr[i] = tmp;
	}
	length = _puts(newStr);
	free(newStr);
	return (length - 2);
}

/**
* checkNonPrintableChar - check non printable char
* @ch:  char
*
* Return: 0 or 1
*/

int checkNonPrintableChar(char ch)
{

	char base[16] = "0123456789ABCDEF";
	char *buffer, *ptr, len;
	char copy = ch;

	buffer = malloc(sizeof(char) * 10);
	if (!buffer)
		return (-2);
	ptr = &buffer[9];
	*ptr = '\0';
	do {
		*--ptr = base[ch % 16];
		ch /= 16;
	} while (ch != 0);

	if (copy < 16)
		*--ptr = '0';
	*--ptr = 'x';
	*--ptr = '\\';
	len = _puts(ptr);
	free(buffer);
	return (len);
}


/**
* replaceNonPrintableChar - replace non printable char 
* @vaList: va_list
* @index: int index
*
* Return: nb of char printed
*/

int replaceNonPrintableChar(va_list vaList, int *index)
{
	char *str;
	unsigned int i, len = 0, count = 0;


	*index += 2;
	str = va_arg(vaList, char *);
	if (!str)
		return (-2);
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			len += checkNonPrintableChar(str[i]);
			count++;
		}
		else 
			_putchar(str[i]);
	}
	if (len)
		return (i + len - 2 - count);
	else 
		return (i - 2);
}



/**
 * rot13 -  print encode string wih rot13
 * @str: string
 *
 * Return: nb char
 */
int rot13(va_list vaList, int *index)
{
	int i, j, len;
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *newStr, *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	
	*index += 2;
	newStr = va_arg(vaList, char*);
	newStr = strCopyAlloc(newStr);
	if (!newStr)
		return (-2);
	for (i = 0; newStr[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (newStr[i] == alpha[j])
			{
				newStr[i] = rot[j];
				break;
			}
		}
	}
	len = _puts(newStr);
	free(newStr);
	return (len - 2);
}


