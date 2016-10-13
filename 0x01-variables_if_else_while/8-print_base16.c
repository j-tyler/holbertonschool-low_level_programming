#include <stdio.h>

/**
 * main - print all hex characters
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		printf("%x", i);
	putchar('\n');
	return (0);
}
