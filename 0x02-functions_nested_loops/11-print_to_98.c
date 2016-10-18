#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: number to start count from
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
		for ( ; n < 98; n++)
			printf("%d, ", n);
	else
		for ( ; n > 98; n--)
			printf("%d, ", n);
	printf("%d\n", n);
}
