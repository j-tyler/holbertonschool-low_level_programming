#include <stdio.h>

/**
 * main - print all combinations from 00 01 to 98 99 where the first comb
 * is less than the second comb
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(32);
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				if (i < 98)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
