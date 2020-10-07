#include "holberton.h"
#include <stdio.h>




/**
 * squereRoot - SQRT of int
 * @i: int
 *
 * Return: int
 */

int squereRoot(int i)
{
	int tmp = 0, res;

	tmp = i;
	if (i < 0)
		return (-1);

	if (i == 1)
		return (1);


	if (i % 2 == 0)
		res = i / squereRoot((i / tmp + tmp) / 2);
	else
		res = i / (squereRoot((i / tmp + tmp) / 2) + 1);
/*	printf("|res %d, n = %d, tmp = %d,\n",res ,n ,tmp);*/
	return (res);

}



/**
 * is_prime_number - prime number
 * @n: number
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int res;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	if (n % 5 == 0)
		return (0);
	n--;
	res = (1 +  is_prime_number(n));
	return (res);
}
