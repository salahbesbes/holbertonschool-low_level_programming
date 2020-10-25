#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* switchCASE -  helping the mainfunction to switch case
* @vaList: va_list
* @j: int index
* @format: const char
*
* Return: void
*/

void switchCASE(va_list vaList, int j, const char *const format)
{
	char *separator = ", ", *str;

	if (j == 0)
		separator = "";
	switch (format[j])
		{
			case 'c':
				{
					printf("%s%c", separator, va_arg(vaList, int));
					break;
				}
			case 'i':
				{
					printf("%s%d", separator, va_arg(vaList, int));
					break;
				}
			case 'f':
				{
					printf("%s%f ", separator, va_arg(vaList, double));
					break;
				}
			case 's':
				{
					str = va_arg(vaList, char*);
					if (str)
					{
						printf("%s%s", separator, str);
						break;
					}
					printf("%s(nil)", separator);
					break;
				}
			default:
				break;
		}
}

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
	int j;

	va_start(vaList, format);
	j = 0;
	while (format && format[j])
	{
		switchCASE(vaList, j, format);
	j++;
	}
	va_end(vaList);
	printf("\n");
}
