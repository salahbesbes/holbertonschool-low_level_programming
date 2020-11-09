#include <stdio.h>
#include <stdlib.h>
char *alphabet_position(char *text) {

	char *new = malloc(sizeof(char) * 500);
	int i, j, k, nb;

	for (i = 0, k = 0; text[i]; i++)
	{
		if (text[i] >= 'a' && text[i] <= 'z' || text[i] >= 'A' && text[i] <= 'Z')
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				if (text[i] == j || text[i] + 32 == j)
				{
					nb = (j - 'a' + 1);
					if (nb > 9)
					{
						new[k] = (nb / 10) + '0';
						k++;
						new[k] = (nb % 10) + '0';
						k++;
						new[k] = ' ';
						k++;
					}
					else
					{
						new[k] = (nb + '0');
						k++;
						new[k] = ' ';
						k++;
					}
				}
			}
			
		}
	}
new[k - 1] = '\0';
new = realloc(new, k);
printf("new = %s\n", new);
return (new);
}





/**
* main - 
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[])
{
	char *p;

	p = alphabet_position("the Sunset sets at Twelve o' clock.");
	printf(" p = %s\n", p);
	free(p);
	return (0);
}
