#include "holberton.h"
#include <stdio.h>


/**
 * _atoi - transform string to entiger
 * @s: string
 *
 * Return: integer
 */


int _atoi(char *s)
{

	int i ,j, k, num = 0, firstNumber = 1, negatif = 1;

	i = j = k = 0;
	while(s[j])
	{

		if (s[j] == '-' && !num)
			negatif *= -1;
		if (s[j] >= '0' && s[j] <= '9' && firstNumber)
		{
			num *= 10;
			num += s[j] - '0';
		}
		else if (num > 0)
			firstNumber = 0;

		if (s[j] == '-' && !num)
			num *= -1;

		j++;
	};

	num *= negatif;
	return (num);
}
