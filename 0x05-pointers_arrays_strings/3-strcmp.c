#include "holberton.h"

/**
 * _strcmp - Compare strings, return value difference
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: Value difference of strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
		i++;

	return (*(s1 + i) - *(s2 + i));
}
