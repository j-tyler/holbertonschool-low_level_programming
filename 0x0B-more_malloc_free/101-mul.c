#include <stdlib.h>
#include "holberton.h"
/**
 * _prt - print string followed by newline
 * @s: string to print
 */
void _prt(char *s)
{
	while (*s != '\0')
		_putchar(*s++);
	_putchar('\n');
}
/**
 * _realloc - Re-allocate memory for a larger or smaller size
 * @ptr: Pointer to the old memory block
 * @old_size: The old size of the memory block
 * @new_size: The new size of the memory block being created
 *
 * Return: Pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *space;
	char *spacecpy, *ptrcpy;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	/* regardless, we need to make new space of new_size */
	space = malloc(new_size);
	if (space == NULL)
		return (NULL);
	/* if ptr is null, return space without copying */
	if (ptr == NULL)
		return (space);
	/* copy old contents into new space */
	spacecpy = space;
	ptrcpy = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		spacecpy[i] = ptrcpy[i];
	free(ptr);
	return (space);
}
/**
 * _calloc - Allocate memory and initalize space to zero
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to memory space, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *space;
	char *memset;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	memset = space;
	for (i = 0 ; i < nmemb * size; i++)
	{
		*(memset + i) = 0;
	}

	return (space);
}
/**
 * _notdigit - check to see if string is only digits
 * @s: string to check
 *
 * Return: 0 if only digits, 1 if non digit chars
 */
int _notdigit(char *s)
{
	for ( ; *s; s++)
		if (*s < '0' || *s > '9')
			return (1);
	return (0);
}
/**
 * rev_ - Reverse a string in place
 * @s: string to reverse
 */
void rev_(char *s)
{
	char tmp;
	int i, j;

	for (i = 0; s[i]; i++)
		;
	i--;
	for (j = 0; j <= i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - j];
		s[i - j] = tmp;
	}
}
/**
 * _addup - add up integer array
 * @arr: array to count
 * @n: number of ints to count
 * @place: which tens place to count
 *
 * Return: result of addition
 */
int _addup(int *arr, int n, int place)
{
	int sum, i;

	for (i = 0, sum = 0; i < n; i++)
	{
		sum += arr[n * i + place];
	}
	return (sum);
}
/**
 * cut_zeros - cut off my zeros
 * @s: string to cut
 *
 * Return: length of s
 */
int cut_zeros(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	i--;
	s--;
	while (*s == '0' && i > 0)
	{
		*s = '\0';
		s--;
		i--;
	}
	return (i);
}

/**
 * main - multiple two numbers and print the result
 * @argc: Number of arguments
 * @argv: Argument strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int *calc;
	char *final;
	unsigned int l1, l2, lsum, i, j, ntmp, rolltmp;

	if (argc != 3)
		_prt("Error"), exit(98);
	if (_notdigit(argv[1]) || _notdigit(argv[2]))
		_prt("Error"), exit(98);
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	lsum = l1 + l2, final = malloc((lsum + 2) * sizeof(*final));
	calc = _calloc(lsum * lsum, sizeof(int));
	if (calc == NULL)
		_prt("Error"), exit(98);
	rev_(argv[1]), rev_(argv[2]);
	for (i = 0; i < l1; i++)
	{
		rolltmp = 0, ntmp = 0;
		for (j = 0; j < l2; j++)
		{
			ntmp = (argv[1][i] - '0') * (argv[2][j] - '0') + rolltmp;
			calc[i * lsum + j + i] = ntmp % 10, rolltmp = ntmp / 10;
		}
		for (; j < l2 + i; j++, rolltmp /= 10)
			calc[i * lsum + j + i] = rolltmp % 10;
		while (rolltmp)
			calc[i * lsum + j + i] = rolltmp % 10, rolltmp /= 10, j++;
	}
	for (i = 0, rolltmp = 0; i < lsum; i++, rolltmp /= 10)
		rolltmp += _addup(calc, lsum, i), final[i] = rolltmp % 10 + '0';
	final[i + 1] = '\0', i = cut_zeros(final), rev_(final);
	final[i + 2] = '\0', _prt(final), free(calc), free(final);
	return (0);
}
