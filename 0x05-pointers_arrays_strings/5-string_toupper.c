#include "holberton.h"

/**
 * string_toupper - CAPS LOCK STUCK ON!  Turn all letters to caps!
 * @s: string to make CAPS
 *
 * Return: Pointer to string
 */

char *string_toupper(char *s)
{
	char *temp;

	temp = s;
	do {
		if (*s <= 'z' && *s >= 'a')
			*s -= 32;
	} while (*s++);

	return (temp);
}
