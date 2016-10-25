#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: String to be printed
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1 ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
