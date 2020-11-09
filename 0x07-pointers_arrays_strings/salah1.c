#include "holberton.h"
#include <stdio.h>

/**
 * main - this function call _manySting() created by salah for fun
 *
 * Return: 0
 */

int main(void)
{
	char synth[] = "is salah im 27 years old, salah is my name, im sur that salah is absent at the momet";
	char *word = "salah";
	int res, loop, lengthPos = 0;
	int pos[lengthPos];

	res = _manySting(synth, word, pos, &lengthPos);
	printf("\"%s\" is repeat %d times in position ", word, res);
	for (loop = 0; loop < lengthPos; loop++)
		printf("%d ", pos[loop]);
	return (0);
}


/**
* _manySting - this function return nb of time a word is found in a synthese
* @s: the synthese we searching in
* @w: word we search
* @pos: is an empty array
* @lengthPos: length of the pos array
*
* Description: search for the word and return the number of time we found it
*       and fill the empty array with the position of the word
* Where: created by salah for fun
* Return:  an integer (number of redendence)
* Error: return 0
*/



int _manySting(char *s, char *w, int *pos, int *lengthPos)
{
	int nb = 0, found = 0, lenW = 0, k;
	unsigned int i, j;

	for (lenW = 0; w[lenW]; ++lenW)
	;

	for (i = 0; s[i]; ++i)
	{
		if (w[0] == s[i])
		{
			found++;
			for (j = 1; w[j]; ++j)
			{
				if (s[i + j] && s[i + j] == w[j])
				{
					found++;
					if (found == lenW)
					{
						nb++;
						*lengthPos = nb;
						pos[*lengthPos - 1] = i;
					}
				}
				else
				{
					found = 0;
					break;
				}
			}
		}
	}
	if (!w[0])
		return (0);
	return (nb);

}
