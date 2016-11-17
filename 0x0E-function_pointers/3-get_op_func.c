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
	int i;
	op_t ops[] = {
		{"+", op_add},
	};
	i = 0;
	return (s[i] == '+' ? ops[i].f : s[0] == '-' ? &(op_sub) :
	 s[0] == '*' ? &(op_mul) : s[0] == '/' ? &(op_div) :
	 s[0] == '%' ? &(op_mod) : NULL);
}
