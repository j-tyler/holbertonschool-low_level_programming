#include "holberton.h"

/**
 * print_number - prints out the specified number one char at a time
 * @n: Number to be printed
 * Description: zeroflag is set to print leading zeros when dropped from math.
 */

void print_number(int n)
{
	int size;

	size = 100000000;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	while (size > 0)
	{
		if (n >= size)
		{
			if (size >= 10)
			{
				_putchar((n / size) % 10 + '0');
			}
			else
			{
				_putchar(n % 10 + '0');
				n = 0;
			}
		}
		if (size > 1)
			size = size / 10;
		else
			size = 0;
	}
}
