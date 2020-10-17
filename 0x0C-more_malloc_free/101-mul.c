#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
* addition - add 2 strings
* @str1: string
* @str2: string
*
* Return: sum of 2 strings
*/

char *addition(char *str1, char *str2)
{
	char *add = NULL, *str_small = NULL, *str_s = NULL, *str_l = NULL;
	int largest = 0, smallest = 0, i, len1 = 0, len2 = 0;
	int j = 0, reste = 0, sum = 0;

	for (len1 = 0; str1[len1]; len1++)
	;
	for (len2 = 0; str2[len2]; len2++)
	;
	largest = (len1 >= len2)? len1 : len2;
	smallest = (len1 < len2)? len1 : len2;
	str_s = (len1 < len2)? str1 : str2;
	str_l = (len1 >= len2)? str1 : str2;
	str_small = malloc(sizeof(char) * (largest + 1));
	for (i = 0; i < largest; i++)
	{
		if (i >= largest - smallest)
		{
			str_small[i] = str_s[j]; 
			j++;
		}
		else 
			str_small[i] = '0';
	}
	str_small[i] = '\0';
	add = malloc(largest + 1);
	for (i = largest - 1; i >= 0; i--)
	{
		sum = str_l[i] + str_small[i] - 96 + reste;
		if (sum > 9)
			reste = sum / 10;
		else 
			reste = 0;
		add[i] = sum % 10 + '0';
	}
	add[largest] = '\0';
	free(str_small);
	return (add);
}
/**
* multiXnumber - multiplier first string by the second one
* @str1: str
* @str2: str
*
* Return: string
*/

void *multiXnumber(char *str2, char *str1)
{
	int len1, len2, mul = 0, reste = 0;
	int i, j, k;
	char *newP = NULL;

	for (len1 = 0; str1[len1]; ++len1)
	;
	for (len2 = 0; str2[len2]; ++len2)
	;
	str2[0] -= '0'; 
	k = len2 + (len1 - 1) + 2;  /* '\0' + reste + 0..0 + len2*/
	newP = malloc(sizeof(char) * k);
	for (i = len1 - 1, j = k - 1; j >= 0; j--)
	{
		if (j > len1)
			newP[j] = '0';
		else
		{
			if (i >= 0)
			{
				mul = (str1[i] - '0') * str2[0] + reste;
				if (mul > 9)
					reste = mul / 10;
				else
					reste = 0;
				newP[j] = (mul % 10) + '0';
			}
			if (j == 0)
				newP[0] = reste + '0';
			i--;
		}
	}
	newP[k - 1] = '\0'; /* last index is length - 1*/
	free(str2);
	return (newP);
}
/**
* CreateNumbers - transform a strin into multiple strings
* @str: str
*
* Return: array of strings
*/

char **CreateNumbers(char *str)
{
	int len2 = 0;
	int i = 0, j = 0, k = 0;
	char **p;


	for (len2 = 0; str[len2]; ++len2)
	;
	p = malloc(sizeof(*p) * len2);
	j = len2;
	p[0] = malloc(sizeof(char) * (j + 1));
	for (i = 1; str[i]; i++, j--)
	{
		p[i] = malloc(sizeof(char) * (j + 1));
			if (!p[i])
			{
				for (; i >= 0; i++)
					free(p[i]);
				_exitErro();
			}
	}

	k = len2;
	for (i = 0; i < len2 ; i++, k--)
	{
		for (j = 0; j < k; j++)
		{
			p[i][j] = '0';
			p[i][0] = str[i];
		}
		p[i][j] = '\0';
	}


	return (p);
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
	unsigned int i, len2;
	char **p = NULL;
	char *newP = NULL, *Sum = NULL;

	if (argc != 3)
		_exitErro();
	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
			_exitErro();
	}
	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] < '0' || argv[2][i] > '9')
			_exitErro();
	}

	p = CreateNumbers(argv[2]);

	for (len2 = 0; argv[2][len2]; ++len2)
	;

	Sum = "0";
	for (i = 0; i < len2 ; i++)
	{
		newP = multiXnumber(p[i], argv[1]);
		Sum = addition(Sum, newP);

		free(newP);
	}
	printf(" add = %s\n", Sum);
	free(Sum);
	return (0);
}
