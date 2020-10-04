#include <stdio.h>

void modif_my_char_var(char *cc , char ccc)
{
	*cc = 'o';
	ccc = 'l';
}
int main(void)
{


	char a[10] = "Holberton";

	printf("%s\n", a);
	printf("Value of the last char of a: %d\n", a[9]);
	printf("Value of a: %p\n", a);
	printf("Value of \"Holberton\": %p\n", "Holberton");


	/*int a[5] = {55, 40, 20, 3 , 5};*/
	/*int *p;*/
	/*int *p2;*/

	/**a = 98;*/
	/**(a + 1) = 198;*/
	/**(a + 2) = 298;*/
	/*a[3] = 398;*/
	/**(a + 4) = 498;*/
	/*printf("a = %p\n", a);*/
	/*printf("*a + 4 = %d\n", *(a+4));*/
	/*printf("*a + 2 = %d\n", *(a+2));*/
	/*p = a + 1;*/
	/**p = 98;*/
	/*p2 = a + 3;*/
	/**p2 = *p + 1337;*/
	/*[>printf("a = %p\n", a);<]*/
	/*[>printf("a+1= %p\n", a+1);<]*/
	/*[>printf("adress a[2] = %p\n", &a[2]);<]*/
	/*[>printf("*a = %d\n",*a);<]*/
	/*printf("*a + 4 = %d\n", *(a + 4 ));*/
	/*[>printf("p , %p\n", p);<]*/
	/*printf("*p %d\n", *p);*/
	/*printf("*p+1 = %d\n", *(p+1));*/
	/*char c;*/
	/*char *p;*/

	/*p = &c;*/
	/*c = 'H';*/


	/*printf("Value of 'c' before the call: %d it's %c \n", c,c);*/
	/*printf("Address of 'c': %p\n", &c);*/
	/*printf("Value of 'p': %p\n", p);*/
	/*printf("Address of 'p': %p\n", &p);*/
	/*modif_my_char_var(p,c);*/
	/*printf("Value of 'c' after the call: %d it's '%c' \n", c,c);*/




	return (0);
}
