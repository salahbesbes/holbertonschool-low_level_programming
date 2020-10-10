#include "holberton.h"	

/**	
 * _isalpha - check the code for Holberton School students.	
 * @c: blabalbal	
 *	
 * Return: Always 0.	
 */	



int _isalpha(int c)	
{	

	int result;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))	
		result = 1;	
	else	
		result = 0;	
	return (result);	
}
