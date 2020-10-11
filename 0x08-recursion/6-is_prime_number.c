#include "holberton.h"
#include <stdio.h>




/**
 * CheckPrime - SQRT of int
 * @n: int
 * @i: int
 * Return: int
 */

int CheckPrime(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (CheckPrime(n, i + 1));
}



/**
 * is_prime_number - prime number
 * @n: number
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int number;

	if (n <= 1)
		return (0);

	number = CheckPrime(n, 2);
	return (number);
}
