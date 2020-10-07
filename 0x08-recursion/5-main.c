#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("1 = %d\n", r);
    r = _sqrt_recursion(1024);
    printf("1024 = %d\n", r);
    r = _sqrt_recursion(16);
    printf("16 = %d\n", r);

    r = _sqrt_recursion(17);
    printf("17 = %d\n", r);
    r = _sqrt_recursion(25);
    printf("25 = %d\n", r);

    r = _sqrt_recursion(-1);
    printf("17 = %d\n", r);

    return (0);
}
