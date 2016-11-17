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
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	return (s[0] == '+' ? ops[0].f : s[0] == '-' ? ops[1].f :
	 s[0] == '*' ? ops[2].f : s[0] == '/' ? ops[3].f :
	 s[0] == '%' ? ops[4].f : NULL);
}
