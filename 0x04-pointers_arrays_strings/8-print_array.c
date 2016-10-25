#include "holberton.h"

/**
 * print_array - print out specificed number of elements of array
 * @a: Array to print from
 * n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i, j;
	long tmp;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			tmp = a[i];
			if (tmp < 0)
			{
				_putchar('-');
				tmp *= -1;
			}
			for (j = 1; j < tmp; j *= 10)
				;
			j /= 10;
			while (j > 1)
			{
				_putchar(tmp / j % 10 + '0');
				j /= 10;
			}
			_putchar(tmp % 10 + '0');
			if (i + 1 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
