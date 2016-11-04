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
	int i, sum;

	for (i = 1, sum = 0; i < argc; i++)
	{
		if (atoi(argv[i]) < 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
