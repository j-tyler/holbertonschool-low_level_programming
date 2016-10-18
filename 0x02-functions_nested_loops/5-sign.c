#include "holberton.h"

/**
 * print_sign - print the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if positive, 0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
