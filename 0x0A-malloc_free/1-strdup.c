#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - Returns a new space in memory with a copy of the string provided
 * @str: String to copy
 *
 * Return: Pointer to new string
 */
char *_strdup(char *str)
{
	char *p;
	int size;

	size = 0;
	while (*(str + size) != '\0')
		size++;

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	size = 0;
	while (*(str + size))
	{
		*(p + size) = *(str + size);
		size++;
	}
	return (p);
}
