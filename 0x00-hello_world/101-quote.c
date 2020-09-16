#include<stdio.h>
#include <unistd.h>
/**
* main - print string
* Return: 1 (Success)
**/
int main(void)
{
char[] message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, sizeof(message));
return (1);
}
