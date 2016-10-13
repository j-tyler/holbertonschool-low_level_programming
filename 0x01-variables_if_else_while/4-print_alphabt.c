#include <stdio.h>

/**
 * main - print out the alphabet
 *
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 101 && c != 113)
			putchar(c);
	}
	putchar('\n');
	return (0);
}
