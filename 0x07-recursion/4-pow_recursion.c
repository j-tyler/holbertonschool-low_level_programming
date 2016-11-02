#include "holberton.h"

/**
 * _pow_recursion - Calculate x to the power of y
 * @x: base value
 * @y: power to caluate
 *
 * Return: x to the power of y, -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	if (y == 1)
		return (x);
	else
		return (x *  _pow_recursion(x, y - 1));
}
