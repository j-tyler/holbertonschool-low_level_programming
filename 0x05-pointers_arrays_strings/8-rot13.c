#include "holberton.h"

/**
 * _ischar - returns if letter
 * @c: char to check
 *
 * Return: 1 if letter, else 0
 */

int _ischar(char c)
{
	int flag;

	flag = 0;
	((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? flag = 1 : 0;
	return (flag);
}


/**
 * rot13 - encode a string with rot13
 * @s: string to encode
 *
 * Return: pointer to string
 */

char *rot13(char *s)
{
	char *tmp;

	tmp = s;
	do {
		if (_ischar(*s))
		{
			((*s >= 'a' && *s <= 'm') ||
			(*s >= 'A' && *s <= 'M')) ? (*s = *s + 13) : (*s = *s - 13);
		}
	} while (*s++);
	return (tmp);
}
