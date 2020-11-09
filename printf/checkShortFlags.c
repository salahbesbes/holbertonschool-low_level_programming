#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/*
*/
int (*checkShortFlags(char ch))(va_list valist, int *index, char ch)
{
	int j;

	constFormat m[] = {
		{'d', printShortSigned},
		{'i', printShortSigned},
		{'u', printShortUnsigned},
		{'x', printShortUnsigned},
		{'X', printShortUnsigned},
		{'o', printShortUnsigned},
		{'\0', NULL}
	};

	for (j = 0; m[j].flags; j++)
	{

		if (ch == m[j].flags)
			return (m[j].handleFlags);
	}
	return (NULL);
		
}
