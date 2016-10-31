#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - Search string for first occurence that matches accept
 * @s: String to search
 * @accept: Chars to search for match
 *
 * Return: Pointer to first occurence in string of chars in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int flag, c;

	flag = 1;
	if (*s == '\0')
		return (s);
	do {
		c = 0;
		while (*(accept + c) != '\0' && flag)
		{
			if (*(accept + c) == *s)
				flag = 0;
			c++;
		}
	} while (flag && *s++);
	return (s);
}
