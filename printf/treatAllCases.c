#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stddef.h>



/**
* treatAllCases - treat all case after the % char
* @a: 
*
* Return: nb of char
*/

int treatAllCases(const char *format, int *i, int *nOfChar, va_list valist, char *fl)
{
	if (fl)
	{
		treatFlags(fl, i, valist, nOfChar);
		return (0);
	}


	if (format[*i + 1] == '%')
	{
		_putchar(format[*i + 1]);
		*i += 2;
		*nOfChar -= 1;
	}
	else if (format[*i + 1] == '\0')
		*i += 1;
	else if (format[*i + 1] == 'l')
		treatLong(format, i, valist, nOfChar);
	else if (format[*i + 1] == 'h')
		treatShort(format, i, valist, nOfChar);
	else
		treatMostCases(format, i, valist, nOfChar);

	return (0);
}

/**
* treatLong - treat case when format[i] == 'l'
* @format: const char
* @i: index
* @vaList: va_list
* @nOfChar: nb of char
*
* Return: void
*/

void treatLong(const char *format, int *i, va_list vaList, int *nOfChar)
{

	int (*printLong)(va_list valist, int *index, char ch);

	printLong = checkLflags(format[*i + 2]);
	if (printLong)
	{
		*nOfChar += printLong(vaList, i, format[*i + 2]);
		*i += 1;
	}
	else 
		*i += 1;
}

/**
* treatShort - treat case when format[i] == 'h'
* @format: const char
* @i: index
* @vaList: va_list
* @nOfChar: nb of char
*
* Return: void
*/

void treatShort(const char *format, int *i, va_list vaList, int *nOfChar)
{

	int (*printShort)(va_list valist, int *index, char ch);

	printShort = checkShortFlags(format[*i + 2]);
	if (printShort)
	{
		*nOfChar += printShort(vaList, i, format[*i + 2]);
		*i += 1;
	}
	else 
		*i += 1;
}

/**
* treatMostCases - treat case when format[i] has no flags
* @format: const char
* @i: index
* @vaList: va_list
* @nOfChar: nb of char
*
* Return: void
*/

void treatMostCases(const char *format, int *i, va_list vaList, int *nOfChar)
{

	int (*funcOfEachType)(va_list valist, int *index);

	funcOfEachType = checkType(format[*i + 1]);
		if (funcOfEachType)
			*nOfChar += funcOfEachType(vaList, i);
		else 
			*i += 1;

}

/**
* treatFlags - treat case when format[i] has flags
* @format: const char
* @i: index
* @vaList: va_list
* @nOfChar: nb of char
*
* Return: void
*/

void treatFlags(char *allFlags, int *i, va_list vaList, int *nOfChar)
{

	int (*Check)(va_list valist, int *index, char ch);

	Check = checkAllFlags(allFlags);
		if (Check)
			*nOfChar += Check(vaList, i, '0');
		else 
			*i += 1;

}

