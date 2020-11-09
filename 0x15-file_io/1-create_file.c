#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>



/**
* create_file - Create a function that creates a file.
* @filename: filename
* @text_content: text_content to appand
* Return: -1
* Error: 1
*/

int create_file(const char *filename, char *text_content)
{

	int len = 0;
	int fileNumber = 0;
	int charWriten = 0;

	for (len = 0; text_content[len]; len++)
	;

	if (!filename)
		return (-1);

	fileNumber = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR + S_IWUSR);
	if (fileNumber < 0)
		return (-1);
	if (!text_content)
		return (1);
	charWriten = write(fileNumber, text_content, len);
	close(fileNumber);
	if (charWriten != len)
		return (-1);

	return (1);
}
