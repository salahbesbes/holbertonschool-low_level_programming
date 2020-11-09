#include "holberton.h"
#include <asm-generic/errno-base.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>



/**
* append_text_to_file - appand a senthense into a file
* @filename: str
* @text_content: string to be appanded
* Return: 1
* Error: -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int fileNumber = 0;
	int charWriten = 0;

	for (len = 0; text_content[len]; len++)
	;

	if (!filename)
		return (-1);

	fileNumber = open(filename, O_WRONLY | O_APPEND);
	if (fileNumber < 0)
		return (-1);
	if (!text_content)
	{
		close(fileNumber);
		return (1);
	}
	charWriten = write(fileNumber, text_content, len);
	if (charWriten != len)
		return (-1);
	close(fileNumber);
	return (1);
}
