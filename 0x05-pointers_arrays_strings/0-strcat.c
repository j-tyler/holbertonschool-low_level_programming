#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenate string arg2 to arg1
 * @dest: destination
 * @src: source to concatenate to destination
 *
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	do {
		*(dest + i + j) = *(src + j);
		j++;
	} while (*(src + j));

	return (dest);
}
