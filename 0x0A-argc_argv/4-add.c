#include <stdio.h>
#include <stdlib.h>

/**
 * checkInteger - check if the char is integer
 * Description: return 1 if its integer 0 if its not
 * @c: char
 *
 * Return: 0 or 1
 */

int checkInteger(char c)
{
	int integer = 1;

	if (c < '0' || c > '9')
		integer = 0;
	return (integer);
}

/**
* main - return a sum of the integer in te string
* if one on the char is not integer return error
* @argc: nb of argument
* @argv: arguments
*
* Return: integer
* Error: print Error
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0, number = 1;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (-1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			for (j = 0; argv[i][j]; ++j)
			{
				number = checkInteger(argv[i][j]);
				if (number == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
}
