#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stddef.h>



/**
* toBase8 - convert a positice integer to base 8
* @vaList: arg
* @index: index
*
* Return: str need free()
*/

int toBase8(va_list vaList, int *index)
{

	char *bases = "0123456789abcdef";
	char *ptr, *buffer;
	unsigned int num, len;

	*index += 2;
	num = va_arg(vaList, unsigned int);
	buffer = malloc(sizeof(char) * 50);
	if (!buffer)
		return (-2);
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = bases[num % 8];
		num /= 8;
	} while (num != 0);
	len = _puts(ptr);
	free(buffer);
	return (len - 2);
}
/**
* toBase2 - convert a positice integer to base 2
* @vaList: arg
* @index: index
*
* Return: str need free()
*/

int toBase2(va_list vaList, int *index)
{

	char *bases = "0123456789abcdef";
	char *ptr, *buffer;
	unsigned int num, len;

	*index += 2;
	num = va_arg(vaList, unsigned int);
	buffer = malloc(sizeof(char) * 50);
	if (!buffer)
		return (-2);
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = bases[num % 2];
		num /= 2;
	} while (num != 0);
	len = _puts(ptr);
	free(buffer);
	return (len - 2);
}
/**
* toBase16 - convert a positice integer to base 16
* @vaList: arg
* @index: index
*
* Return: str need free()
*/

int toBase16(va_list vaList, int *index)
{

	char *bases = "0123456789abcdef";
	char *ptr, *buffer;
	unsigned int num, len;

	*index += 2;
	num = va_arg(vaList, unsigned int);
	buffer = malloc(sizeof(char) * 50);
	if (!buffer)
		return (-2);
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = bases[num % 16];
		num /= 16;
	} while (num != 0);
	len = _puts(ptr);
	free(buffer);
	return (len - 2);
}
/**
* toBase10 - convert a positice integer to base 10 unsigned
* @vaList: arg
* @index: index
*
* Return: str need free()
*/

int toBase16X(va_list vaList, int *index)
{

	char *bases = "0123456789ABCDEF";
	char *ptr, *buffer;
	unsigned int num, len;

	*index += 2;
	num = va_arg(vaList, unsigned int);
	buffer = malloc(sizeof(char) * 50);
	if (!buffer)
		return (-2);
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = bases[num % 16];
		num /= 16;
	} while (num != 0);
	len = _puts(ptr);
	free(buffer);
	return (len - 2);
}

/**
* toBase10 - convert a positice integer to base 10 unsigned
* @vaList: arg
* @index: index
*
* Return: str need free()
*/

int toBase10(va_list vaList, int *index)
{

	char *bases = "0123456789ABCDEF";
	char *ptr = NULL, *buffer = NULL;
	unsigned int num = 0, len = 0;

	*index += 2;
	num = va_arg(vaList, unsigned int);

	buffer = malloc(sizeof(char) * 50);
	if (!buffer)
		return (-2);
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = bases[num % 10];
		num /= 10;
	} while (num != 0);
	len = _puts(ptr);
	free(buffer);
	return (len - 2);
}

