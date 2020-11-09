#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * checkType - check thechar after the % and execute
 * @ch: char
 *
 * Return: func
 */
int (*checkType(char ch))(va_list valist, int *index)
{
		int j;
		print_t m[] = {
			{'c', print_c},
			{'d', numToString},
			{'s', print_strings},
			{'i', numToString},
			{'r', rev_string},
			{'o', toBase8},
			{'x', toBase16},
			{'b', toBase2},
			{'X', toBase16X},
			{'u', toBase10},
			{'S', replaceNonPrintableChar},
			{'p', handleP},
			{'R', rot13},
			{'\0', NULL}
		};

			for (j = 0; m[j].t; j++)
			{
				if (ch == m[j].t)
					return (m[j].f);

			}
	_putchar('%');
	return (NULL);
		
}
