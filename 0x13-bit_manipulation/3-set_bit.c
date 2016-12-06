/**
 * set_bit - Set the value of a bit to 1
 * @n: number to set bit in
 * @index: index to set bit
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(*n) * 8 - 1;
	if (index > size)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
