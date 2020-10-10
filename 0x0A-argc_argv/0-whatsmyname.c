#include <stdio.h>

#ifdef __GNUC__
#  define UNUSED(x) UNUSED_ ## x __attribute__((__unused__))
#else
#  define UNUSED(x) UNUSED_ ## x
#endif

#ifdef __GNUC__
#  define UNUSED_FUNCTION(x) __attribute__((__unused__)) UNUSED_ ## x
#else
#  define UNUSED_FUNCTION(x) UNUSED_ ## x
#endif

/**
* main - print the name of the execution file
* print the name of execution file even when we rename it
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/

int main(int UNUSED(argc), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

