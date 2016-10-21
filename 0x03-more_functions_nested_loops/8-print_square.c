#include "holberton.h"

/**
 * print_square - create a pound square of size arg
 * @size: size of the square
 */

void print_square(int size)
{
	int i, j;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
}
