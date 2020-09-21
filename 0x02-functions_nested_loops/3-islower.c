#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	int result;
	if ( c >= 97  && c <= 122)
		result = 1;	
	else result = 0;
	return (result);
}
