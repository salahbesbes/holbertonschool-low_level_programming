#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
* print_numbers - print all the args separated wy a const char
* @n: max nb of arguments
* @separator: a strring to put between int
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vaList;
	unsigned int i;
	int nb;

	va_start(vaList, n);
	for (i = 0; i < n; i++)
	{
		nb = va_arg(vaList, int);
		printf("%d", nb);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vaList);
}
