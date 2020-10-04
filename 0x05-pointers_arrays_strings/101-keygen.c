#include "holberton.h"
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 *
 * Return: 0
 */


int main(void)
{

	srand(time(NULL));
	int i, j, escii = 1772, sum = 0, r;
	int pass[1000];
	for(i = 0; sum < 1772; i++)
	{
		r = (rand() % (127 + 1 - 33)) + 33;
		sum += r;
		if (sum > escii && sum - escii <= 33)
		{
			if (*(pass + i - 2) + (sum - escii) > 122)
				*(pass + i - 2) += sum - escii ;
			else
				*(pass +i -2) -= sum -escii;
		}
		else
			*(pass + i) = r;
	}
	sum = 0;
	for (j = 0; j < i ; j++)
	{


		printf("s[%d], ", pass[j]);
		sum += pass[j];
	}
	printf("sum %d",sum );
	return (0);
}
