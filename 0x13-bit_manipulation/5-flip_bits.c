#include "holberton.h"
/**
 * flip_bits - find number of bits required to flip from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of ints required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size, num, i;

	size = sizeof(n) * 8 - 1;
	for (i = 0, num = 0; i <= size; i++)
	{
		if ((n & 1) != (m & 1))
			num++;
		n = n >> 1;
		m = m >> 1;
	}
	return (num);
}
