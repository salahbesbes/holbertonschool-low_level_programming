#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
* CheckNumber - check if arguments conatin a string
* @str: *char
*
* Return: 1 or 0
*/

int CheckNumber(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' && str[i] > '9')
			return (0);

	}

	return (1);
}
/**
* _exitErro - print Error
* Return: 98
*/

int _exitErro(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
* main - multiply 2 numbers
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[])
{
	int isNumber = 1;

	if (argc != 3)
	{
		_exitErro();
	}

	isNumber = CheckNumber(argv[1]);
		if (!isNumber)
			_exitErro();
	isNumber = CheckNumber(argv[2]);
		if (!isNumber)
			_exitErro();

	return (0);
}
