#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - calculate the sum of all arguument passed
* @n: number of arguuments
*
* Return: the sum of args
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list vaList;

	if (n == 0)
		return (0);

	va_start(vaList, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vaList, int);
	}

	va_end(vaList);
	return (sum);
}
