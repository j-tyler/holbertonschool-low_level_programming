#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long i, ms, mb, ns, nb, oldns, oldnb;

	ns = 2;
	ms = 1;
	nb = ns - ns;
	mb = ms - ms;
	oldnb = ms - ms;
	printf("%ld, %ld, ", ms, ns);
	for (i = ns + ms; i <= 98; i++)
	{
		oldns = ns;
		ns = ns + ms;
		ms = oldns;
		oldnb = nb;
		if (ns / 1000000000 > 0)
		{
			nb++;
			ns = ns % 1000000000;
		}
		nb = nb + mb;
		mb = oldnb;
		if (nb)
			printf("%ld", nb);
		printf("%ld, ", ns);
	}
	printf("\n");
	return (0);
}
