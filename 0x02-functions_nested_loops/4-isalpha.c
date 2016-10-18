#include "holberton.h"

/**
 * _isalpha - checks if arg is alphabetic char
 * @c: int to be checked
 *
 * Return: 1 if letter, else 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		if (c <= 'Z' || c >= 'a')
		{
			return (1);
		}
	return (0);
}
