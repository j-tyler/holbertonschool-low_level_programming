#include "holberton.h"

/**
 * _abs - compute absolute value of an int
 * @c: int to be evaluated
 *
 * Return: Absolute value of arg
 */

int _abs(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}
