#include "holberton.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/**
* main - copy 2 file to an an other
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[])
{
	int cpFrom = 0, cpTo = 0, writenChar = 0, readChar = 0;
	int checkExit = 0;
	char buf[1024];

	if (argc != 3)
		exit(97);

	cpFrom = open(argv[1], O_RDONLY);
	if (cpFrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((readChar = read(cpFrom, buf, 1024)) > 0)
	{
	buf[readChar] = '\0';

	if (readChar < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	cpTo = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, 0664);
	if (cpTo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	writenChar = write(cpTo, buf, readChar);
	if (writenChar != readChar)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	}
	checkExit = close(cpTo);
	if (checkExit < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cpTo);
		exit(100);
	}

	close(cpFrom);
	if (checkExit < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cpFrom);
		exit(100);
	}

	return (1);
}
