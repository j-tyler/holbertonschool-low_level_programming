#include <stdio.h>

/**
 * main - print sum of all numbers below 1024 that are multiples
 *
 * Return: 0
 */

int main(void)
{
	int i, total;

	total = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
	}
	printf("%d\n", total);
	return (0);
}
