#include "holberton.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
