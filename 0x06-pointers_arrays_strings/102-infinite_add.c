#include "holberton.h"
#include <stdio.h>

/**
 * infinite_add - description
 * @n1: str
 * @n2: str
 * @r: str
 * @size_r: int
 *
 * Return: string
 */
int add(void) { return (0); }
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
  int fill, i, j, lenN1, lenN2, sum = 0, reste = 0, totalSum = 0, multiple = 1;

  for (lenN1 = 0; n1[lenN1]; ++lenN1)
    ;

  for (lenN2 = 0; n2[lenN2]; lenN2++)
    ;
  j = lenN2 - 1;
  int k = size_r - 1;
  for (i = lenN1 - 1; i >= 0; i--, j--, k--) {
    if (j >= 0)
      sum = n1[i] + n2[j] + reste - 96;
    else
      sum = n1[i] + reste - 48;

    if (sum > 9)
      reste = sum / 10;
    else
      reste = 0;

    r[k] = (sum % 10) + 48;
    printf("k->%d, r[k]=%d, \n", k, r[k] - 48);
  }
  printf("%d\n", k);

  r[size_r] = '\0';

  if (k <= 0 && reste)
    return (0);
  else if (reste)
    r[k] = reste;

  /*
  if (reste)
  {
          if(k = 0)
                  r[k] = reste;
          if (k > 0)
                  r[k - 1] = reste;
  }
  */
  r[size_r] = '\0';
  add();
  return (r);
}
