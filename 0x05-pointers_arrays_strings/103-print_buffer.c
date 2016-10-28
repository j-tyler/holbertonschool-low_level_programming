#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - print the size of buffer with formatting
 * @b: buffer to print from
 * @size: number of bytes to print
 */

void print_buffer(char *b, int size)
{
	char *bstart;
	char s[10];
	int counter;

	bstart = b;
	counter = 0;
	s[10] = '\0';

	while (size > counter)
	{
		printf("%08x: ", counter);
		do {
			if (*b >= ' ' && *b <= '~')
				s[counter % 10] = *b;
			else
				s[counter % 10] = '.';
			printf("%02x", *b);
			b++;
			counter = b - bstart;

			if (counter % 2 == 0)
				printf(" ");
		} while (counter % 10 != 0 && size > counter);


		while (counter % 10 != 0 && counter >= size)
		{
			s[counter % 10] = '\0';
			if (counter % 2 != 0)
				printf("   ");
			else
				printf("  ");
			counter++;
		}
		printf("%s\n", s);
	}
	if (size < 1)
		printf("\n");
}
