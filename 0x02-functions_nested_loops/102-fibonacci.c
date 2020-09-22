#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i, t1 = 0, t2 = 1, nextTerm;

	for (i = 1; i <= 50; ++i)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		printf("%d, ", nextTerm);
	}
	printf("\n");
	return (0);
}
