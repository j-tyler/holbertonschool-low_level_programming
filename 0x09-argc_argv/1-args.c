#include <stdio.h>

/**
 * main - Print the number of arguments supplied
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
