#include "holberton.h"

/**
 * print_number - prints out the specified number one char at a time
 * @n: Number to be printed
 * Description: zeroflag is set to print leading zeros when dropped from math.
 */

void print_number(int n)
{
	int size, zeroflag;

	size = 1000000000;
	zeroflag = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		if (n > size)
		{
			_putchar(n / size + '0');
			n = n % size;
			zeroflag = 1;
		}
		else if (zeroflag == 1)
		{
			_putchar('0');
			zeroflag = 0;
		}
		size = size / 10;
	}
}
