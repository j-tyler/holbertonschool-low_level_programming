#include "holberton.h"

/**
 * _revcmp - Compare two strings backwards until the first *
 * @s1: String 1 to compare
 * @s2: String 2 to compare
 * @flag: flag to stop searching for end of strings
 *
 * Return: 1 if the same, else 0
 */
static int _revcmp(char *s1, char *s2, int flag)
{
	if (flag && *s1 != '\0')
		return (_revcmp(++s1, s2, 1));
	else if (flag && *s2 != '\0')
		return (_revcmp(s1, ++s2, 1));
	else if (flag && s1 == '\0' && s2 == '\0')
		return (_revcmp(--s1, --s2, 0));

	if (*s2 == '*')
		return (1);
	else if (*s1 == *s2)
		return (_revcmp(--s1, --s2, 0));
	else
		return (0);
}

/**
 * _chkstar - Check to see if it is the last star in a string
 * @s: Pointer to string to check. Expected to start with a star
 *
 * Return: 1 if last star else 0
 */
static int _chkstar(char *s)
{
	s++;
	if (*s == '*')
		return (0);
	else if (*s == '\0')
		return (1);
	else
		return (_chkstar(s));
}

/**
 * wildcmp - Compare two strings, find if they are matching
 * @s1: String to compare
 * @s2: String to compare, can include * wildcard
 *
 * Return: 1 if identical, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, (s2 + 1)));
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, (s2 + 1)));
		else if (_chkstar(s2))
			return (_revcmp(s1, s2, 1));
		else if (*s1 == *(s2 + 1))
			return (wildcmp(s1, (s2 + 1)));
		else if (*s1 != *(s2 + 1))
			return (wildcmp((s1 + 1), s2));
	}
	return (0);
}
