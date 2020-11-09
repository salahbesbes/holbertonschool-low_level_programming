#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char *series_sum(const size_t n)
{
   // Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 
    float i, sum = 0;
    char new[100];
    char *p = malloc(sizeof(char) * 20);
    int j;
    for (i = 1; i < n * 3; i += 3)
        sum += 1/i;
    sprintf(new, "%.2f\n", sum);

    p = new;
    for ( j = 0; p[j]; j++)
    {
        printf("p[%d] = %d\n", j, p[j] - 48);
    }
    p[j - 1] = '\0';
    printf("p = %s\n", p);
    return (p);
}


int main(int argc, char const *argv[])
{
    char *p;
    p = series_sum(5);
    printf("main = %s", p);

    return 0;
}
