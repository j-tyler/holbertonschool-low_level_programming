#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers
 * @argc: Number of arguments
 * @argv: the array of arguments
 *
 * Return: Product of two arguments, else return 1 for erro
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
