#include "holberton.h"

/**
 * _islower
 * @c: int to be checked
 *
 * Return: 1 if lowercase, else 0
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
