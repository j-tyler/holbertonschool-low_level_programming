#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Return pointer to array, or terminate process on fail
 * @b: size of memory to allocate
 *
 * Return: Pointer to memory space of size b
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);
	if (space == NULL || b == 0)
		exit(98);
	return (space);
}
