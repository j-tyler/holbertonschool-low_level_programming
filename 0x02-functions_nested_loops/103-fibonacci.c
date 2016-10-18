#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long n, m, sum;

	sum = 2;
	m = 1;
	n = 2;
	for (i = m + n; i <= 32; i++)
	{
		n = n + m;
		m = n - m;
		if (n % 2 == 0)
			sum += n;
	}
	printf("%ld\n", sum);
	return (0);
}
