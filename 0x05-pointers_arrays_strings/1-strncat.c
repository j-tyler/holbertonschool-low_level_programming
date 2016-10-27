#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to concatenate from src
 *
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i); i++)
		;
	j = 0;
	while (*(src + j) && j < n)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	return (dest);
}
