#include "holberton.h"

/**
 * print_times_table - print out a times table to argument
 * @n: the size of table to print to, max 15
 *
 * Return: nothign
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		;
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				_putchar(',');
				_putchar(' ');
				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(k / 100 + '0');
					_putchar(k % 100 / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
