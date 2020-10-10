#include <stdio.h>
#include <stdlib.h>

# define UNSUED(x) (void)(x)

/**
 * CheckMin - prints the minimum number of coins to make change for
 * an amount of money.
 * @val: amount of money
 * @res: result to print
 *
 * Return: int
 */

int CheckMin(int val, int res)
{
	int i;
	int tmp[4] = {25, 10, 5, 2};

	if (val == 0)
		return (res);
	for (i = 0; i < 4; ++i)
	{
		if (val / tmp[i] > 0)
		{
			res += val / tmp[i];
			val %= tmp[i];
			return (CheckMin(val, res));
		}
	}
	if (val == 1)
		return (res += 1);
	return (0);
}



/**
 * main - call Compa wich will calculethe min integer to return
 * @argc: nb arguments
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res = 0;
	int amount = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (amount < 0)
		printf("%d\n",0);
	else
	{
		res = CheckMin(amount, res);
		printf("%d\n", res);
	}

	return (0);
}
