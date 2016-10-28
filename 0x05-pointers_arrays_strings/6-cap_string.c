#include "holberton.h"

/**
 * cap_string - capitalize all words of string
 * @s: string to capitalize
 *
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	char *temp;
	char prev;

	temp = s;
	if (*s <= 'z' && *s >= 'a')
		*s -= 32;
	do {
		if (*s <= 'z' && *s >= 'a')
		{
			prev = *(s - 1);
			switch (prev)
			{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\t':
			case '\n':
				*s -= 32;
				break;
			}
		}
	} while (*s++);
	return (temp);
}
