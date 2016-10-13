#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate random number, show if positive or negative
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char *string;

	if (n > 0)
	{
		string = "is positive";
	} else if (n < 0)
	{
		string = "is negative";
	} else
	{
		string = "is zero";
	}
	printf("%d %s\n", n, string);
	return (0);
}
