#include "holberton.h"

/**
 * _memcpy - Copy n bytes from src to dest
 * @dest: pointer to beginning of writing area
 * @src: pointer to source of writing
 * @n: Number of bytes to write
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
