#include "holberton.h"

/**
 * rev_string - Reverse given string in place
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char tmp;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	i--;
	for (j = 0; j <= i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
