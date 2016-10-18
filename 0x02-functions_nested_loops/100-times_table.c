#include <stdio.h>
#include "holberton.h"

/**
 * print_times_table - print out a times table to argument
 * @n: the size of table to print to, max 15
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		;
	else
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			for (j = 1; j <= n; j++)
			{
				printf(", %3d", j * i);
			}
			printf("\n");
		}
	}
}
