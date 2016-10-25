#include "holberton.h"

/**
 * puts2 - print only even indexed chars from arg
 * @str: string to print from
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
