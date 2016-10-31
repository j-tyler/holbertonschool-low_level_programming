#include "holberton.h"

/**
 * _strstr - Find first occurence of needle in the haystack
 * @haystack: String to search
 * @needle: String to search for
 *
 * Return: Pointer to needle in haystack, else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, flag;

	flag = 1;
	do {
		i = 0;
		do {
			if (*(haystack + i) == '\0' && *(needle + i) == '\0')
			{
				flag = 0;
				break;
			}
			else if (*(haystack + i) != *(needle + i))
				break;
			i++;
		} while (*(haystack + i - 1) != '\0');
	} while (flag && *haystack++);
	return (haystack);
}