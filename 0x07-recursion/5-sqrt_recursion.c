#include "holberton.h"

/**
 * _sqrt_recursion - find if a number is a natual square root
 * @n: number to evaluate
 *
 * Return: The Square root, or -1
 */
int _sqrt_recursion(int n)
{
	static int c = 1;
	int tmp;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);

	if (c * c > n)
	{
		c = 1;
		return (-1);
	}
	else if (c * c == n)
	{
		tmp = c;
		c = 1;
		return (tmp);
	}
	else
		return (_sqrt_recursion(n + 1));
}
