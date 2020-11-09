#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
int print_c(va_list arg, int *index)
{
	char ch;
	ch = va_arg(arg, int);

	*index += 2;

	_putchar(ch);
  	return (1 - 2);    
}

/*
int print_dec(va_list arg, int *index)
{
	int n = va_arg(arg, int);
	int num;
	int last = n % 10;
	int dig;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

  return (0);     
}
int print_int(va_list arg, int *index)
{
	int n = va_arg(arg, int);
	int num;
	int last = n % 10;
	int dig;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

       return (i);
}

*/
/**
* _puts - print a string
* @str: str
*
* Return: void
*/

int _puts(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
int print_strings(va_list arg, int *index)
{
	char *str;
	unsigned int i;

	*index +=2;
	str = va_arg(arg, char *);
	if (!str)
	{
		_puts("(null)");
		return ( 6 - 2);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i - 2);
}
