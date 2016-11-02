#include "holberton.h"

/**
 * _strlen_recursion - Return the length of the string
 * @s: String to evaluate
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + (_strlen_recursion(++s)));
}
