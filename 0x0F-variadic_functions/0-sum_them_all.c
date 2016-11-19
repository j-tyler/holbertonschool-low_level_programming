#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Return a sum of all but first parameter
 * @n: Number of arguments to expect
 *
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	va_start(args, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
