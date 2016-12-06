#include "holberton.h"
/**
 * get_bit - Return status of bit at given index
 * @n: number to evaluate
 * @index: index to evaluate
 *
 * Return: 1 or 0, -1 if index out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
		return (-1);
	return (n << (size - index) >> size);
}
