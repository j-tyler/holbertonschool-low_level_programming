#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - Find first occurrence of c in s
 * @s: String to search
 * @c: Char to search for
 *
 * Return: Pointer to first occurrence of c in s, else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
