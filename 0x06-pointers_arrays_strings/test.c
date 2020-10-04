#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "ab", str2[] = "abCd", str3[] = "abcd";
	int result;

	// comparing strings str1 and str2
	result = strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);


	return 0;
}
