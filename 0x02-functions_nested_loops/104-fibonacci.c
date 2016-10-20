#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long i, ms, mb, ns, nb, oldns, oldnb, zerocount;

	ns = 2;
	ms = 1;
	nb = ns - ns;
	mb = ms - ms;
	printf("%ld, %ld, ", ms, ns);
	for (i = ns + ms; i <= 98; i++)
	{
		ns = ns + ms;
		ms = ns - ms;
		if (ns / 1000000000 > 0)
		{
			nb++;
			ns = ns % 1000000000;
		}
		nb = nb + mb;
		mb = nb - mb;
		if (nb)
		{
			printf("%ld", nb);
			zerocount = ns;
			while (zerocount < 100000000)
			{
				printf("0");
				zerocount *= 10;
			}
		}
		printf("%ld", ns);
		if (i < 98)
		printf(", ");
	}
	printf("\n");
	return (0);
}
