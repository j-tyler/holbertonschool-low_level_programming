#include "holberton.h"

/**
 * print_diagonal - make a diagonal of length arg
 * @n: length of diagonal to print
 */

void print_diagonal(int n)
{
	int i, j;

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i < j; i++)
			_putchar(' ');

		if (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
