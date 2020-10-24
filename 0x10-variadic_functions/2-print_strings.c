#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* X - 
* @a: 
*
* Return:
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vaList;
	unsigned int i;
	char *p;

	va_start(vaList, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(vaList, char*);
		if (p)
			printf("%s", p);
		else 
			printf("(nil)");


		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vaList);
}
