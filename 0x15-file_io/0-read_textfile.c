#include "holberton.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>



/**
* read_textfile - read file and print every char until we reach arg letters
* @filename: filename
* @letters: nb of char we are printing
* Return: nbof char printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nbCharLu = 0;
	size_t printedChar = 0;
	FILE *file = NULL;
	int caractereLu;

	if (!filename)
		return (0);

	file = fopen(filename, "r");
	if (!file)
	{
		return (0);
	}
	do {
		caractereLu = fgetc(file);
		if (caractereLu < 0)
			return (nbCharLu);
		if (caractereLu > 0)
		{
			printedChar = write(STDOUT_FILENO, &caractereLu, 1);
			if (printedChar != 1)
				return (0);
			nbCharLu++;
		}
	} while (nbCharLu < (ssize_t)letters);
	fclose(file);
	return (nbCharLu);
}
