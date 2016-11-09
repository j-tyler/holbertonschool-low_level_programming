#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Create a char array, filled with a specific character
 * @size: Size of the array
 * @c: char to fill array with
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}
