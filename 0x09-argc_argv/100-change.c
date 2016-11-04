#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the minimum number of coins to make change
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 or 1 if Error
 */
int main(int argc, char *argv[])
{
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	*argv[1] = atoi(argv[1]);
	coins = 0;
	while (*argv[1] >= 25)
	{
		coins++;
		*argv[1] -= 25;
	}
	while (*argv[1] > 0)
	{
		if (*argv[1] >= 10)
		{
			coins++;
			*argv[1] -= 10;
		}
		else if (*argv[1] >= 5)
		{
			coins++;
			*argv[1] -= 5;
		}
		else if (*argv[1] >= 1)
		{
			coins++;
			*argv[1] -= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
