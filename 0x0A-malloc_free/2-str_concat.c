#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - find and return length of string
 * @s: string to find length of
 *
 * Return: Length of string s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * str_concat - concat two strings to a new space in memory
 * @s1: string one
 * @s2: string two
 *
 * Return: Pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *snew, *empty;
	int i, size1, size2;

	empty = "";

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	size1 = _strlen(s1);
	size2 = _strlen(s2) + 1;

	snew = malloc(size1 + size2);
	if (snew == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		*(snew + i) = *(s1 + i);
	}
	for ( ; i < size1 + size2; i++)
	{
		*(snew + i) = *(s2 + i - size1);
	}
	return (snew);
}
