
#include "holberton.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


/**
 * _strstr - function that locates a substring.
 * @haystack: str
 * @needle: str
 *
 * Return: pointer to the beginning of the located substring,
 *	or NULL if the substring is not found.
 */

int _strstr(char *haystack, char *needle)
{
	unsigned int i, j, found = 0;

	for (i = 0; haystack[i]; ++i)
	{
		found = 0;
		if (haystack[0] && haystack[i] == needle[0])
		{
			found = 1;

			for (j = 1; needle[j] ; ++j)
			{
				if (haystack[i + j] && haystack[i + j] == needle[j])
					found = 1;
				else
				{
					found = 0;
					break;
				}
			}
		}
		if (found)
			break;
	}
	if (found)
		return (1);
	else if (needle[0] == '\0')
		return (1);
	else
		return (0);
}

/**
* X - 
* @a: 
*
* Return:
*/

void checkELF(int id)
{
	int readChar, i, found = 0;
	char head[5] = {0x7f, 'E', 'L', 'F'}, buf[1024];
	

	readChar = read(id, buf, 3);
	found = _strstr(head, buf);
	if (found)
	{
		found = lseek(id, -3, SEEK_CUR);
	}
	else 
	{
		exit(98);
	}
}

/**
* main - print 10 lines of a file
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[])
{
	char *w = "Entry point address:", result[1024];
	int id, readChar, i = 0, nb, ch = 0, found = 0, j;
	char buf[1024], *fileName = argv[1];
	int printChar = 1, line = 0;

	id = open("elf", O_RDONLY);
	checkELF(id);
	while ((readChar = read(id, &buf[i], 1)) > 0)
	{
		/*
		ch++;
		if (buf[i] == '\n')
		{
			buf[i] = 0;
			line++;
			nb = _strstr(buf, w);
			if (nb)
				printChar = ch;
			i = 0;
			break;;
		}
		*/
		if (buf[0] && buf[i] == w[0])
		{
			found = 0;
			for (j = 1; w[j] ; ++j)
			{
				if (buf[i] == w[j])
					found = 1;
				else
				{
					found = 0;
					continue;
				}
			}
		}
		if (found)
		{
			printf(" found = %d\n", found);
			break;
		}
		if (readChar != 1)
			break;
		i++;
	}
	/*
	close(id);
	id = open("elf", O_RDONLY);
	read(id, &result[i], printChar);
	*/
	close(id);
	printf("%s", buf);
	return (0);
}


