#include <stdio.h>

/**
 * main - Print all arguments recieved
 * @argc: number of arguments
 * @argv: argument array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
