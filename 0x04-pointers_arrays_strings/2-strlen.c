#include "holberton.h"

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
