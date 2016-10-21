#include <stdio.h>
#include "holberton.h"

/**
 * main - compute 612852475143's largest prime number
 *
 * Return: 0
 */

int main(void)
{
	printf("%d\n", largestprime(612852475143, 2));
}

/**
 * largestprime - return largest prime factor of n
 * @n: number to be factored
 * @m: always 2 for smallest possible factor
 *
 * Return: largest prime factor of n
 */

int largestprime(long n, int m)
{
	while (n % m != 0)
		m++;
	if (m == n)
		return (m);
	else
		return (largestprime(n / m, m));
}
