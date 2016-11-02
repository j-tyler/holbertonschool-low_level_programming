#include "holberton.h"

/**
 * factorial - Find the factorial of given number
 * @n: Number to evaluate
 *
 * Return: Factorial of N or -1 if error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (1);
	else
		return (n * factorial(n - 1));
}
