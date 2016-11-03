#include "holberton.h"

/**
 * _sqrt_moreparams - Non-static resursive helper for finding sqrt
 * @n: number to find square
 * @c: numbers we have checked
 *
 * Return: The Square Root if rational, or -1
 */
int _sqrt_moreparams(int n, int c)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);

	if (c * c > n)
		return (-1);
	else if (c * c == n)
		return (c);
	else
		return (_sqrt_moreparams(n, c + 1));
}

/**
 * _sqrt_recursion - find if a number is a natual square root
 * @n: number to evaluate
 *
 * Return: The Square root, or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_moreparams(n, 1));
}
