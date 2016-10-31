#include "holberton.h"

/**
 * set_string - Sets the value of s to a char*
 * @s: Address to pointer to char*
 * @to: Where s should point
 */

void set_string(char **s, char *to)
{
	*s = to;
}
