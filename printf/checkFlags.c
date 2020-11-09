#include "holberton.h"

/**
* X - 
* @a: 
*
* Return:
*/

int handlearg0(va_list vaList, int *i)
{
	printf(" found some thing at position %d", *i);
	return (0);
}

/**
* X - 
* @a: 
*
* Return:
*/

int (*checkAllFlags(char *str))(va_list vaList, int *index)
{

	int i, j;
	print_t array[] = {
		{'0', handlearg0},
		{'\0', NULL}
	};
	

	for (i = 0; str[i]; i++)
		for (j = 0; array[j].t; j++)
			if (str[i] == array[j].t)
			{
				return(array[j].f);
			}
	 

	
	return (NULL);
}
