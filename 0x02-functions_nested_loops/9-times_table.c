#include "holberton.h"

/**
 * times_table - prints the times table from 0 to 9
 *
 * Return: 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
