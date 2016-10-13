#include <stdio.h>

/**
 * main - print all numbers 012 to 789 where
 * first numb < second numb < thrid numb
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i < 7)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
