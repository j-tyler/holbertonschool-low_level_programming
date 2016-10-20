#include <stdio.h>

/**
 * _isdigit - check if arg is a digit 0 to 9
 * @c: int to be checked
 *
 * Return: 1 if digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
