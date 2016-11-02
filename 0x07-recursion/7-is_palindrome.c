#include "holberton.h"

/**
 * is_palindrome - Checks to see if string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	static int findlen = 1, templen = -1, permlen;

	if (findlen == 0)
	{
		if (templen <= permlen / 2)
		{
			findlen = 1, templen = 0;
			return (1);
		}
		else if (*s == *(s - templen))
		{
			templen = templen - 2;
			return (1 * is_palindrome(--s));
		}
		else
		{
			findlen = 1, templen = 0;
			return (0);
		}
	}
	else if (findlen && *s != '\0')
	{
		if (templen == -1)
			templen = 0;
		templen++;
		return (is_palindrome(++s));
	}
	else
	{
		templen--;
		permlen = templen;
		findlen = 0;
		if (templen < 0)
			return (1);
		return (is_palindrome(--s));
	}
}
