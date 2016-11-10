#include "holberton.h"
#include <stdlib.h>
/**
 * _wordcount - count words in a string
 * @s: string to count words
 *
 * Return: number of words in string
 */
int _wordcount(char *s)
{
	int wordflag, count;

	wordflag = 0;
	count = 0;
	do {
		if (wordflag == 0 && *s <= '~' && *s >= '!')
		{
			wordflag = 1;
			count++;
		}

		if (wordflag && (*s > '~' || *s < '!'))
		{
			wordflag = 0;
		}
	} while (*s++);
	return (count);
}
/**
 * _wordsize - return the size of word n in the string
 * @s: string to look at
 * @n: which word number to return
 *
 * Return: Length of word n.
 */
int _wordsize(char *s, int n)
{
	int wordflag, size;

	wordflag = 0;
	size = 0;
	do {
		if (wordflag == 0 && *s <= '~' && *s >= '!')
		{
			wordflag = 1;
			n--;
		}
		if (wordflag && n == 0 && *s <= '~' && *s >= '!')
		{
			size++;
		}

		if (wordflag && (*s > '~' || *s < '!'))
		{
			wordflag = 0;
		}
	} while (*s++);
	return (size);
}
/**
 * _cpyarr - copy word into array based on string
 * @s: string to take from
 * @sdest: destination for word
 * @n: word to copy
 */
void _cpyarr(char *s, char *sdest, int n)
{
	int wordflag, i, j;

	wordflag = 0;
	i = 0;
	j = 0;
	do {
		if (wordflag == 0 && *(s + j) <= '~' && *(s + j) >= '!')
		{
			wordflag = 1;
			n--;
		}
		if (wordflag && n == 0 && *(s + j) <= '~' && *(s + j) >= '!')
		{
			*(sdest + i) = *(s + j);
			i++;
		}

		if (wordflag && (*(s + j) > '~' || *(s + j) < '!'))
		{
			wordflag = 0;
		}
		j++;
	} while (*(s + j) != '\0');
	*(sdest + i) = '\0';
}

/**
 * strtow - Return a pointer to an array of strings
 * @str: string to add
 *
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	int words, i;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = _wordcount(str);

	arr = malloc((words + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		*(arr + i) = malloc((_wordsize(str, i + 1) + 1) * sizeof(char));
		if (*(arr + i) == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(*(arr + i));
			free(arr);
			return (NULL);

		}
	}
	for (i = 0; i < words; i++)
	{
		_cpyarr(str, *(arr + i), i + 1);
	}
	*(arr + i) = NULL;

	return (arr);
}
