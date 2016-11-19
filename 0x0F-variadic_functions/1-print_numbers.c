#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print out numbers given as arguments
 * @separator: which separator to use
 * @n: number of numbers expected
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *c;

	if (separator == NULL)
		*c ="";
	else
		*c = *separator;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i + 1 < n)
			printf("%c ", *c);
	}
	printf("\n");
	va_end(valist);
}
