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
	int i, flag;

	i = 0;
	flag = 0;
	while (i < n)
	{
		if (flag)
			*(dest + i) = '\0';
		else
			*(dest + i) = *(src + i);

		if (*(src + i) == '\0')
			flag = 1;
		i++;
	}

	return (dest);
}
