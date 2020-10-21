#include "function_pointers.h"

/**
* print_name - print a nameusing function pointer
* @name: str
* @f: function pointer 
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
