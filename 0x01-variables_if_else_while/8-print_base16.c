#include<stdio.h>
/**
 * main - blablabla
 *
 * Return: blablabla
 */
int main(void)
{
int i;
char j;
for (i = 0; i <= 9; i++)
putchar((i % 10) + '0');
for (j = 'a'; j <= 'f'; j++)
putchar(j);
putchar('\n');
return (0);
}
