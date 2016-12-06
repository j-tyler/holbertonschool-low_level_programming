#include "holberton.h"
/**
 * clear_bit - set a value of bit to 0 at index
 * @n: number to set bit in
 * @index: index to set bit in
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(*n) * 8 - 1;
	if (index > size)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
