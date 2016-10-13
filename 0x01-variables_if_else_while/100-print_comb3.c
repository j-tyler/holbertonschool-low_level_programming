#include <stdio.h>

/**
 * main - print all numbers from 00 to 99 where the first numb is < last numb
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i * j != 72)
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
