#include "holberton.h"

/**
 * _isupper - check if arg is upper or lower case
 * @c: int to be checked
 *
 * Return: 1 if uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
