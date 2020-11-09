#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct m
{
	char t;
	int (*f)(va_list valist, int *index) ;
} print_t;

typedef struct constFormat
{
	char flags;
	int (*handleFlags)(va_list valist, int *index, char ch);
} constFormat;
int (*checkType(char ch))(va_list valist, int *i);

char *strCopyAlloc(char *format);
int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int checkFlagsForType(char c);
int print_c(va_list arg, int *index);
int print_dec(va_list arg, int *index);
int print_int(va_list arg, int *index);
int rev_string(va_list vaList, int *index);
int print_strings(va_list arg, int *index);
int numToString(va_list vaList, int *index);
int toBase2(va_list vaList, int *index);
int toBase8(va_list vaList, int *index);
int toBase16(va_list vaList, int *index);
int toBase16X(va_list vaList, int *index);
int toBase10(va_list vaList, int *index);
int replaceNonPrintableChar(va_list vaList, int *index);
int checkNonPrintableChar(char ch);
int convertLongIntToBase16(long int num);
int handleP(va_list vaList, int *index);
int rot13(va_list vaList, int *index);
int handleL(va_list vaList, int *index);
int treatAllCases(const char *fmt, int *i, int *nOfChar, va_list va, char *allFlags);
char *getAllFlags(int pos, char *p);
int (*checkLflags(char ch))(va_list valist, int *i, char ch);
int printLongUnsigned(va_list vaList, int *index, char ch);
int convertLongIntToAnyBase(unsigned long int num, char ch);
int printLongSigned(va_list vaList, int *index, char ch);
int convertShortIntToAnyBase(unsigned int num, char ch);
int printShortUnsigned(va_list vaList, int *index, char ch);
int printShortSigned(va_list vaList, int *index, char ch);
int (*checkShortFlags(char ch))(va_list valist, int *index, char ch);
void treatShort(const char *format, int *i, va_list vaList, int *nOfChar);
void treatMostCases(const char *format, int *i, va_list vaList, int *nOfChar);
void treatLong(const char *format, int *i, va_list vaList, int *nOfChar);
int handlearg0(va_list vaList, int *i);
int (*checkAllFlags(char *str))(va_list vaList, int *index);
void treatFlags(char *allFlags, int *i, va_list vaList, int *nOfChar);




#endif
