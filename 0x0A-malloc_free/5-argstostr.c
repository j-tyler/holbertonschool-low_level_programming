#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments as a string
 * @ac: argument count
 * @av: argument array
 *
 * Return: Pointer to string
 */
char *argstostr(int ac, char **av)
{
	int nulcount, len, i, j;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, nulcount = 0, len = 0; nulcount < ac; i++, len++)
	{
		if (av[nulcount][i]  == '\0')
		{
			nulcount++;
			i = -1;
		}
	}

	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = 0, nulcount = 0; nulcount < ac; i++, j++)
	{
		p[j] = av[nulcount][i];
		if (av[nulcount][i] == '\0')
		{
			p[j] = '\n';
			nulcount++;
			i = -1;
		}
	}
	return (p);
}
