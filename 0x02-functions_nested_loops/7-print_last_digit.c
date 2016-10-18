#include "holberton.h"

/**
 * print_last_digit - print the last digit of arg
 * @c: int to be evaluated
 *
 * Return: last digit of arg
 */

int print_last_digit(int c)
{
	int n;

	n = c % 10;

	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}
