#include "holberton.h"

/**
 * puts_half - print second half of arg
 * @str: string to print from
 */

void puts_half(char *str)
{
	int i;

	for (i = 1; str[i] != '\0'; i++)
		;
	i++;
	for (i = i/2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
