#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_all - print different type of variable
* @format: is a string that contain the first letter
* representing a type to be printed
*
* Return: void
*/

void print_all(const char *const format, ...)
{
	va_list vaList;
	char *str;
	int nb, j, i;
	double fl;

	va_start(vaList, format);
	j = 0;
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
				{
					i = va_arg(vaList, int);
					printf("%c ", i);
					break;
				}
			case 'i':
				{
					nb = va_arg(vaList, int);
					printf("%d ", nb);
					break;
				}
			case 'f':
				{
					fl = va_arg(vaList, double);
					printf("%.2f ", fl);
					break;
				}
			case 's':
				{
					str = va_arg(vaList, char*);
					if (str)
						printf("%s ", str);
					if (!str)
						printf("(nil)");
					break;
				}
			default:
				break;
		}
	j++;
	}
	printf("\n");
	va_end(vaList);
}
