#include "holberton.h"

/**
 * _strspn - Find length of byte matche from s that are in accept
 * @s: String to search
 * @accept: Bytes to match to s
 *
 * Return: Number of bytes that match in a row starting from s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i;

	n = 0;
	while (*s)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *s)
				break;
		}
		if (*(accept + i) != '\0')
			n++;
		else
			break;
		s++;
	}
	return (n);
}
