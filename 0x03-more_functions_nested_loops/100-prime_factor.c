#include <stdio.h>

/**
 * main - compute 612852475143's largest prime number
 *
 * Return: 0
 */

int largestprime(long, int);

int main(void)
{
	printf("%d\n", largestprime(612852475143, 2));
}

int largestprime(long n, int m)
{
	while (n % m != 0)
		m++;
	if (m == n)
		return m;
	else
		return largestprime(n / m, m);
}
