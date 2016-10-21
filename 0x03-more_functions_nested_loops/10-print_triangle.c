#include "holberton.h"

/**
 * print_triangle - print one sided triangle
 * @size: height of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 1; j<= size; j++)
		{
			if (j < i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
