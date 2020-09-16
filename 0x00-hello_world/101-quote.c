#include<stdio.h>
#include <unistd.h>
int main(void)
{
char[] message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2, message, sizeof(message));
return (1);
}
