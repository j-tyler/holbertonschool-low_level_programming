#include "holberton.h"

/**
 * _memset - Fills/overwrites memory at selected spot
 * @s: Pointer to begin writting to memory
 * @b: Byte to fill memory with
 * @n: Number of Bytes to write
 *
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
