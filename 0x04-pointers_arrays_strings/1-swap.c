#include "holberton.h"

/**
 * swap_int - swap arg a with arg b
 * @a: arg to be swapped
 * @b: arg to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
