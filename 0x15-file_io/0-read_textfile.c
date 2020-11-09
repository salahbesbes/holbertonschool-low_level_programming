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
	ssize_t nbCharLu = 0, printedChar = 0;
	int fileNumber, i;
	char content[10000];

	if (!filename)
		return (0);

	fileNumber = open(filename, O_RDONLY, 600);
	if (fileNumber == -1)
		return (0);

	nbCharLu = read(fileNumber, content, letters);
	close(fileNumber);

	content[letters] = '\0';
	for (i = 0; content[i]; i++)
	;
	printedChar = write(STDOUT_FILENO, content, i);
	if (printedChar != nbCharLu)
		return (0);
	return (printedChar);
}
