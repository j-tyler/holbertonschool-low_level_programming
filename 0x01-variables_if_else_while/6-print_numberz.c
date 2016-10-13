#include <stdio.h>

/**
 * main - print all base10 numbers with putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
