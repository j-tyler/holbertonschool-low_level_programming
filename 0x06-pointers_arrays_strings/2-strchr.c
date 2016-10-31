#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Find first occurrence of c in s
 * @s: String to search
 * @c: Char to search for
 *
 * Return: Pointer to first occurrence of c in s, else NULL
 */

char *_strchr(char *s, char c)
{
	int found;

	found = 0;
	do {
		if (*s == c)
			found = 1;
	} while (found == 0 && *s++ != '\0');

	if (found == 0)
		return (NULL);
	else
		return (s);
}
