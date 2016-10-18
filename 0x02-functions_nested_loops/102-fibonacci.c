#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long n, m;

	m = 1;
	n = 2;
	printf("%ld, %ld, ", m, n);
	for (i = m + n; i <= 50; i++)
	{
		n = n + m;
		m = n - m;
		printf("%ld", n);
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
