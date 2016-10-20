#include "holberton.h"

/**
 * print_line - print a line of length arg
 * @n: length of line
 */

void print_line(int n)
{
	for ( ; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
