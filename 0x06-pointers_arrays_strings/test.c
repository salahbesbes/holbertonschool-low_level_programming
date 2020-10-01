#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "00", str2[] = "abCd", str3[] = "abcd";
	int result, i;


	for (i = 0; str2[i]; i++)
	{
		printf("[%d]= %d, ", i, str2[i]);
	}

	return 0;
}
