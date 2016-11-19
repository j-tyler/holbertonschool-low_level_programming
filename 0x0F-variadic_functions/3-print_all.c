#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * _printC - Prints out a character
 * @valist: variable string to print
 * @s: separator to print
 */
static void _printC(va_list valist, char *s)
{
	printf("%s%c", s, va_arg(valist, int));
}
/**
 * _printI - Prints out an integer
 * @valist: variable string to print
 * @s: separator to print
 */
static void _printI(va_list valist, char *s)
{
	printf("%s%d", s, va_arg(valist, int));
}
/**
 * _printF - Prints out a float
 * @valist: variable string to print
 * @s: separator to print
 */
static void _printF(va_list valist, char *s)
{
	printf("%s%f", s, va_arg(valist, double));
}
/**
 * _printS - Print out a string
 * @valist: variable string to print
 * @s: separator to print
 */
static void _printS(va_list valist, char *s)
{
	char *s1;

	s1 = va_arg(valist, char *);
	if (s1 == NULL)
		s1 = "(nil)";
	printf("%s%s", s, s1);
}
/**
 * print_all - Prints a list accepting various types
 * @format: The format to print out the string
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i, j;
	char *s;
	printer p[] = {
		{"c", _printC},
		{"i", _printI},
		{"f", _printF},
		{"s", _printS},
		{"s", _printS}
	};
	va_start(valist, format);

	j = 0;
	s = "";
	while (format != NULL && *(format + j) != '\0')
	{
		i = 0;
		while (i < 4 && *(format + j) != p[i].c[0])
			i++;
		if (i < 4)
		{
			p[i].f(valist, s);
			s = ", ";
		}
		j++;
	}
	printf("\n");
	va_end(valist);
}
