#include <stdio.h>

/**
 * main - Prints the size of types on system.
 *
 * Return: Always 0
 */

int main(void)
{
	printf("Size of a char: %d bytes(s)\n", (int)(sizeof(char)));
	printf("Size of a int: %d bytes(s)\n", (int)(sizeof(int)));
	printf("Size of a long int: %d bytes(s)\n", (int)(sizeof(long)));
	printf("Size of a long long int: %d bytes(s)\n", (int)(sizeof(long long)));
	printf("Size of a float: %d bytes(s)\n", (int)(sizeof(float)));
	return (0);
}
