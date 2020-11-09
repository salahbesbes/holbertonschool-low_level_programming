#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list valist;
	int i, *index, nbOfCharAdded = 0;
	char *allFlags;
	
	index = &i;
	va_start(valist, format);
	if (format == NULL)
		return (-1);
	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			allFlags = getAllFlags(i, (char *)format);
			if (allFlags)
				treatAllCases(format, &i, &nbOfCharAdded, valist, allFlags);
			
			/*
			i++;
			treatAllCases(format, &i, &nbOfCharAdded, valist);
			continue;
			*/
		}
		_putchar(format[i]);
		i++;
	}
	va_end(valist);
	return (i + nbOfCharAdded);
}
