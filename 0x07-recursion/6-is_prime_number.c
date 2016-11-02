#include "holberton.h"

/**
 * is_prime_number - Determine if a number is prime
 * @n: number to evaluate
 *
 * Return: 1 if n is prime, else 0
 */
int is_prime_number(int n)
{
	static int tester = 2;

	if (n < 2)
	{
		return (0);
	}
	else if (n < tester * 2)
	{
		tester = 2;
		return (1);
	}
	else if (n % tester == 0)
	{
		tester = 2;
		return (0);
	}
	else
	{
		tester++;
		return (is_prime_number(n));
	}
}
