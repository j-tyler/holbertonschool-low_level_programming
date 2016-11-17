#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Selects correct math function
 * @s: character string to find operand in
 *
 * Return: Pointer to correct math function, Return NULL on fail
 */
int (*get_op_func(char *s))(int, int)
{
	int (*f)(int, int);

	f = NULL;
	s[1] != '\0' ? 0 : s[0] == '+' ? f = &op_add : s[0] == '-' ? f = &op_sub : s[0] == '*' ? f = &op_mul : s[0] == '/' ? f = &op_div : s[0] == '%' ? f = &op_mod : 0;
	return (f);
}
