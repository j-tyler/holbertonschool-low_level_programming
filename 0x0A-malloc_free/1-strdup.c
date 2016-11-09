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
	unsigned int size, i;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (*(str + size) != '\0')
		size++;
	size++;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		*(p + i) = *(str + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
