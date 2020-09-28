#include "holberton.h"


/**
 * swap_int - swap 2 integer
 * @a: integer
 * @b: integer
 *
 * return: void
 */


void swap_int(int *a, int *b)
{
	int local;
	local = *a;
	*a = *b;
	*b = local;
}
