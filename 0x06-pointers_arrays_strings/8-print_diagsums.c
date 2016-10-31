#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sums of matricies
 * @a: pointer to start of matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < size; i++, a += size)
	{
		sum += *(a + i);
	}
	printf("%d, ", sum);

	a -= size;
	sum = 0;
	for (i = 0; i < size; i++, a -= size)
	{
		sum += *(a + i);
	}
	printf("%d\n", sum);
}
