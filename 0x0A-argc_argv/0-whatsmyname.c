#include <stdio.h>


/**
* main - print the name of the execution file
* print the name of execution file even when we rename it
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/

int main(int argc, char *argv[])
{
	int i, foundmv = 0;
	char *mv = "mv";
	char *newname = "./";

	for (i = 0; argv[0][i]; ++i)
	{
		if (argv[0][i] == mv[i])
			foundmv = 1;
		else
			foundmv = 0;
	}

	if (foundmv)
	{
		for (i = 0; argv[2][i]; ++i)
		{
			newname[i + 2] = argv[2][i];
		}
		printf("%s\n", newname);
	}
	return (0);
}

