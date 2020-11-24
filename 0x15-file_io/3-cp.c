#include "holberton.h"
#include <stdlib.h>

/**
* _exitt - short cut to exit the main funtion with diffrent message error and
* value
* @exitValue: value to exit with
* @str: message to send to std error
* @fd: id of the file
* Return: void
*/

void _exitt(int exitValue, char *str, int fd)
{
	switch (exitValue)
	{
		case 97:
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}
		case 98:
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(98);
		}
		case 99:
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(99);
		}
		case 100:
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
		break;
	}
}

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
		_exitt(97, NULL, 0);
	if (!argv[1] || !argv[2])
		exit(97);
	if (!argv[1])
		_exitt(98, NULL, 0);
	if (!argv[2])
		_exitt(99, NULL, 0);
	cpFrom = open(argv[1], O_RDONLY);
	if (cpFrom < 0)
		_exitt(98, argv[1], 0);

	cpTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (cpTo < 0)
		_exitt(99, argv[2], 0);
	while ((readChar = read(cpFrom, buf, 1024)) > 0)
	{
		if (readChar < 0)
			_exitt(98, argv[1], 0);
		writenChar = write(cpTo, buf, readChar);
	}
	if (writenChar != readChar)
		_exitt(99, argv[2], 0);
	checkExit = close(cpTo);
	if (checkExit < 0)
		_exitt(100, NULL, cpTo);

	checkExit = close(cpFrom);
	if (checkExit < 0)
		_exitt(100, NULL, cpFrom);

	return (0);
}
