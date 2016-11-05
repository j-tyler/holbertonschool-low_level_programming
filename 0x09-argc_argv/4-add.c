#include <stdio.h>
#include <stdlib.h>

/**
 * main - add up positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if error, else 0
 */
int main(int argc, char *argv[])
{
	int i;
	long sum;

	for (i = 1, sum = 0; i < argc; i++)
	{
		if (*argv[i] == 0 || atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%ld\n", sum);
	return (0);
}
