#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 *
 * Return: square root if its natural
 */


int _sqrt_recursion(int n)
{
	int tmp = 0, res;

	tmp = n;
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);


	if (n % 2 == 0)
		res = n / _sqrt_recursion((n / tmp + tmp) / 2);
	else
		res = n / (_sqrt_recursion((n / tmp + tmp) / 2) + 1);
/*	printf("|res %d, n = %d, tmp = %d,\n",res ,n ,tmp);*/
	return (res);

}
