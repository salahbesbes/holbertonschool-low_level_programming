#include <stddef.h>
#include <limits.h>
#include <stdio.h>
#include "../holberton.h"


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int len = 1, len2= 1;
	

	len = _printf("%0d\n", 40);

	/*
len = _printf("The %s value of an %c%c%c is %d\nIts min value is %i\n", "max", 'i', 'n', 't', INT_MAX, INT_MIN);
	len2 = printf("The %s value of an %c%c%c is %d\nIts min value is %i\n", "max", 'i', 'n', 't', INT_MAX, INT_MIN);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("The %s value of an %c%c%c is %i\nIts min value is %d\n", "max", 'i', 'n', 't', INT_MAX, INT_MIN);
	len2 = printf("The %s value of an %c%c%c is %i\nIts min value is %d\n", "max", 'i', 'n', 't', INT_MAX, INT_MIN);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}


	len = _printf("%s%d bytes in %i %c%c\n", "There is ", -1024, -1, 'K', 'B');
	len2 = printf("%s%d bytes in %i %c%c\n", "There is ", -1024, -1, 'K', 'B');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("%s%i bytes in %d %c%c\n", "There is ", -1024, -1, 'K', 'B');
	len2 = printf("%s%i bytes in %d %c%c\n", "There is ", -1024, -1, 'K', 'B');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

len = _printf("The %s value of an unsigned%c%c%c is %u\n", "max", 'i', 'n', 't', UINT_MAX);
	len2 = printf("The %s value of an unsigned%c%c%c is %u\n", "max", 'i', 'n', 't', UINT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("The %s value of an unsigned%c%c%c is %o\n", "max", 'i', 'n', 't', UINT_MAX);
	len2 = printf("The %s value of an unsigned%c%c%c is %o\n", "max", 'i', 'n', 't', UINT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("The %s value of an unsigned%c%c%c is %x\n", "max", 'i', 'n', 't', UINT_MAX);
	len2 = printf("The %s value of an unsigned%c%c%c is %x\n", "max", 'i', 'n', 't', UINT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("The %s value of an unsigned%c%c%c is %X\n", "max", 'i', 'n', 't', UINT_MAX);
	len2 = printf("The %s value of an unsigned%c%c%c is %X\n", "max", 'i', 'n', 't', UINT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
len = _printf("%s%S%c", "Show me the codes: ", "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x10", '\n');
	len2 = printf("%s\\x01\\x02\\x03\\x04\\x05\\x06\\x07\\x08\\x09\\x0A\\x10%c", "Show me the codes: ", '\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}


len = _printf("%s%u bytes in %u %c%c\n", "There is ", 1024, 1, 'K', 'B');
	len2 = printf("%s%u bytes in %u %c%c\n", "There is ", 1024, 1, 'K', 'B');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("%s%o bytes in %o %c%c\n", "There is ", 1024, 1, 'K', 'B');
	len2 = printf("%s%o bytes in %o %c%c\n", "There is ", 1024, 1, 'K', 'B');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("%s%x bytes in %x %c%c\n", "There is ", 1024, 1, 'K', 'B');
	len2 = printf("%s%x bytes in %x %c%c\n", "There is ", 1024, 1, 'K', 'B');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("%s%X bytes in %X %c%c\n", "There is ", 1024, 1, 'K', 'B');
	len2 = printf("%s%X bytes in %X %c%c\n", "There is ", 1024, 1, 'K', 'B');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}


	len = _printf("%R\n%r\n", "Ubyoregba Fpubby !", "! loohcS notrebloH");
	len2 = printf("Holberton School !\nHolberton School !\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("%R\n%r\n", "Ubyoregba Fpubby !", "!loohcS notrebloH");
	len2 = printf("Holberton School !\nHolberton School!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	void *ptr = (void *)0x7faf51f0f608;
len = _printf("%p\n%r\n", ptr, "! loohcS notrebloH");
	len2 = printf("%p\nHolberton School !\n", ptr);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("%p\n%r\n", ptr, "!loohcS notrebloH");
	len2 = printf("%p\nHolberton School!\n", ptr);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

len = _printf(NULL);
	len2 = printf(NULL);
	fflush(stdout);


	printf(" len = %d  len2 %d\n", len, len2);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}




len = _printf("%hd", SHRT_MAX);
	len2 = printf("%hd", SHRT_MAX);


len = _printf("%li", LONG_MIN);
	len2 = printf("%li\n", LONG_MIN);
len = _printf("%lX", ULONG_MAX);
	len2 = printf("%lX\n", ULONG_MAX);

	len = _printf("%lX - %lX = %lX\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	len2 = printf("%lX - %lX = %lX\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);

len = _printf("%lu\n", 0UL);
	len2 = printf("%lu\n", 0UL);

	len = _printf("%li + %li = %li\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX));
	len2 = printf("%li + %li = %li\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX));
	len = _printf("%li", LONG_MIN);
	len2 = printf("%li", LONG_MIN);
		len = _printf("There is %lX bytes in %lX KB\n", 1024UL, 1UL);
	len2 = printf("There is %lX bytes in %lX KB\n", 1024UL, 1UL);

len = _printf("%lu\n", 0UL);
	len2 = printf("%lu\n", 0UL);

	len = _printf("There is %lu bytes in %lu KB\n", 1024UL, 1UL);
	len2 = printf("There is %lu bytes in %lu KB\n", 1024UL, 1UL);
len = _printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	len2 = printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);

len = _printf("%lo", 1024UL);
	len2 = printf("%lo\n", 1024UL);

	len = _printf("%lo", 0UL);
	len2 = printf("%lo\n", 0UL);

	len = _printf("%lo", ULONG_MAX);
	len2 = printf("%lo\n", ULONG_MAX);
len = _printf("There is %lo bytes in %lo KB\n", 1024UL, 1UL);
	len2 = printf("There is %lo bytes in %lo KB\n", 1024UL, 1UL);
len = _printf("%lo - %lo = %lo\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	len2 = printf("%lo - %lo = %lo\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	len = _printf("%lx", 0UL);
	len2 = printf("%lx\n", 0UL);


	len = _printf("%lx - %lx = %lx\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	len2 = printf("%lx - %lx = %lx\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);

 

	len = _printf("%lu\n", ULONG_MAX);
	len2 = printf("%lu\n", ULONG_MAX);
_printf("%hi + %hi = %hi\n", SHRT_MIN, SHRT_MAX, (SHRT_MIN + SHRT_MAX));
printf("%hi + %hi = %hi\n", SHRT_MIN, SHRT_MAX, (SHRT_MIN + SHRT_MAX));
_printf("%lu", 0);
_printf("%lu\n", 0);
_printf("%lo", 1024);
_printf("%lo\n", 1024);
_printf("%lo", 0);
_printf("%lo\n", 0);
_printf("%lx\n", 0);
len = _printf("%lx\n", ULONG_MAX);
len2 = printf("%lx\n", ULONG_MAX);
len = _printf("%lo\n", ULONG_MAX);
len2 = printf("%lo\n", ULONG_MAX);
len = _printf("%lu\n", ULONG_MAX);
len2 = printf("%lu\n", ULONG_MAX);


len = _printf("%li\n", LONG_MIN);
len2 = printf("%li\n", LONG_MIN);

len = _printf("%lo\n", 0UL);
len2 = printf("%lo\n", 0UL);

len = _printf("There is %lo bytes in %lo KB\n", 1024UL, 1UL);
len2 = printf("There is %lo bytes in %lo KB\n", 1024UL, 1UL);
len = _printf("%lx\n", 0UL);
len2 = printf("%lx\n", 0UL);










*/

/*


	len = _printf("%lu\n", ULONG_MAX);
	len2 = printf("%lu\n", ULONG_MAX);
_printf("%hd + %hd = %hd\n", SHRT_MIN, SHRT_MAX, (SHRT_MIN + SHRT_MAX));
printf("%hd + %hd = %hd\n", SHRT_MIN, SHRT_MAX, (SHRT_MIN + SHRT_MAX));

_printf("%ld", LONG_MIN);
printf("%ld", LONG_MIN);
_printf("%li + %li = %li\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX));

printf("%li + %li = %li\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX));
_printf("%hi + %hi = %hi\n", SHRT_MIN, SHRT_MAX, (SHRT_MIN + SHRT_MAX));
printf("%hi + %hi = %hi\n", SHRT_MIN, SHRT_MAX, (SHRT_MIN + SHRT_MAX));










_printf("%s", "This sentence is retrieved from va_args!\n");


	_printf("%p\n", (void *)0x7fff5100b608);
	printf("%p\n",(void *)0x7fff5100b608);	

	_printf("\nCan you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	printf("\nCan you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);

	_printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	_printf("");
	printf("");
	_printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
	printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
_printf("%pppp", (void *)0x7fff5100b6f8);
printf("%pppp", (void *)0x7fff5100b6f8);

	len = _printf("%S\n", "Holberton\nSchool");
	len = _printf("%S\n", "Holberton\nSchool");
	len = _printf("%S\n", "No special character.");
	len2 = printf("%S\n", "No special character.");
	len = _printf("%S\n", "\n");
	len2 = printf("%S\n", "\n");
	*/
	/*
len = _printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	len2 = printf("- What did you say?\n- %s\n- That's what I thought.\n", "");

len = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	len2 = printf("Could you print some non-prntable characters?\nSure:\\x1F\\x7F\\x0A\nThanks!\n");
	len = _printf("%S", "\n");
	len2 = printf("\\x0A");
	len = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
len2 = printf("\\x01\\x02\\x03\\x04\\x05\\x06\\x07");
len = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	len = _printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	len2 = printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
len = _printf("%S", "No special character.");
	len2 = printf("No special character.");
	fflush(stdout);
	printf(" got %d  expect %d\n", len, len2);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	 * */


	/*



	_printf("%o\n", 1024);
	_printf("%u\n", -1024);
	_printf("%u\n", 0);
	_printf("%u\n", UINT_MAX);
	_printf("%u\n", l);
	_printf("There is %u bytes in %u KB\n", 1024, 1);
	printf("There is %u bytes in %u KB\n", 1024, 1);
	_printf("%u - %u = %u\n", 2048, 1024, 1024);
	printf("%u - %u = %u\n", 2048, 1024, 1024);
	_printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
	printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
	_printf("%o\n", 1024);
	printf("%o\n", 1024);
	_printf("%o\n", -1024);
	printf("%o\n", -1024);
	_printf("%u\n", 0);
	printf("%u\n", 0);
	_printf("%o\n", UINT_MAX);
	printf("%o\n", UINT_MAX);
	_printf("%o\n", l);
	_printf("There is %o bytes in %o KB\n", 1024, 1);
	_printf("%o - %o = %o\n", 2048, 1024, 1024);
	printf("%o - %o = %o\n", 2048, 1024, 1024);
	_printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	_printf("%x\n", 1024);
	printf("%x\n", 1024);
	_printf("%x\n", -1024);
	printf("%x\n", -1024);
	_printf("%x\n", 0);	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("->%s%c %i%%... %sPlease wait%c\n", "Loading", ':', 98, "", '\0');
	len2 = printf("->%s%c %i%%... %sPlease wait%c\n", "Loading", ':', 98, "", '\0');
	


	printf("%x\n", 0);
	_printf("%x\n", UINT_MAX);
	printf("%x\n", UINT_MAX);
	_printf("%x\n", l);
	printf("%x\n", l);
	_printf("There is %x bytes in %x KB\n", 1024, 1);
	_printf("%x - %x = %x\n", 2048, 1024, 1024);
	_printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	_printf("%X\n", 1024);
	printf("%X\n", 1024);
	_printf("%X\n", -1024);
	printf("%X\n", -1024);
	_printf("%X\n", 0);
	printf("%X\n", 0);
	_printf("%X", UINT_MAX);
	printf("%X", UINT_MAX);
	_printf("%X\n", l);
	printf("%X\n", l);
	_printf("There is %X bytes in %X KB\n", 1024, 1);
	_printf("%X - %X = %X\n", 2048, 1024, 1024);
	_printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
	printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
	_printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	_printf("uuoxxX%xuoXo\n", 1024);
	printf("uuoxxX%xuoXo\n", 1024);
	_printf("%b\n", 5);
	_printf("%o\n", 43);
	printf("%o\n", 43);
	_printf("%o\n", 53);
	printf("%o\n", 53);
	_printf("%x\n", 500);
	printf("%x\n", 500);
	_printf("%X\n", 500);
	printf("%X\n", 500);
	_printf("%d\n",6565656 );
	_printf("%d\n", -1024);
	_printf(" 0 = %d\n", 0);
	printf("%d\n", 0);
_printf("%d\n", INT_MAX);
printf("%d\n", INT_MAX);
_printf("%d\n", INT_MIN);
printf("%d\n", INT_MIN);
	_printf("%d\n", l);

	printf("%d\n", l);
	_printf("%i\n", l);

	printf("%i\n", l);
	l = INT_MIN - 1024;

	_printf("%d\n", l);
	printf("%d\n", l);
	_printf("%i\n", l);
	printf("%i\n", l);
	_printf("There is %d bytes in %d KB\n\n", 1024, 1);
	printf("There is %d bytes in %d KB\n\n", 1024, 1);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("%i\n", 1024);
	_printf("%i\n", -1024);
	_printf("%i\n", 0);
	_printf("%i\n", INT_MAX);
	_printf("%i\n", INT_MIN);
_printf("There is %i bytes in %i KB\n", 1024, 1);
printf("There is %i bytes in %i KB\n", 1024, 1);
_printf("%i - %i = %i\n", 1024, 2048, -1024);
printf("%i - %i = %i\n", 1024, 2048, -1024);
_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
_printf("%d == %i\n", 1024, 1024);
printf("%d == %i\n", 1024, 1024);
_printf("iddi%diddiiddi\n", 1024);
printf("iddi%diddiiddi\n", 1024);
_printf("%d\n", 10000);
_printf("%i\n", 10000);
printf("%i\n", 10000);





	len = printf("%s ",NULL);
	printf(" len = %d\n", len);
	
	len = _printf(" %s",NULL);
	printf(" len = %d\n", len);
len2 = printf("***%c*********\n",'\0');
printf(" len = %d len2 = %d\n", len, len2);
_printf("%s", "This sentence is retrieved from va_args!\n");
printf("%s", "This sentence is retrieved from va_args!\n");
_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
_printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("A char inside a sentence: %c. Did it work?\n", 'F');
_printf("%%\n");
_printf("%%\n");
_printf("Should print a single percent sign: %%\n");
printf("Should print a single percent sign: %%\n");
_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait salah %", '\n');
printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait salah %", '\n');
_printf("css%ccs%scscscs\n", 'T', "Test");
printf("css%ccs%scscscs\n", 'T', "Test");
	char *str = "When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\n\nMost of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\n\nThe gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\n\nYou can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\n\nMany options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\n";

	len = _printf("man gcc:\n%s", str);
	len2 =printf("man gcc:\n%s", str);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf(" len = %d\n", len);
		printf(" len2 = %d\n", len2);
		fflush(stdout);
		return (1);
	}
	_printf("%c", '\0');
	printf("%c", '\0');
	_printf("%");
	printf("%");
	_printf("%!\n");

	printf("%!\n");
	printf("%K\n");
_printf("%K\n");
*/
return (0);
}
