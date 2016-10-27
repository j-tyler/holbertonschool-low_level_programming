#include "holberton.h"

/**
 * _strncpy - copy n chars from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of chars to copy
 *
 * Return: pointer to new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
