#include <stdio.h>	

/**	
 * main - check the code for Holberton School students.	
 *	
 * Return: Always 0.	
 */	
int main(void)	
{	
	int i, sum1 = 0;	

	for (i = 0; i < 1024; i++)	
	{	
		if (i % 3 == 0 || i % 5 == 0)	
			sum1 += i;	
	}	
	printf("%d\n", sum1);	
	return (0);	
}
