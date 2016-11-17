#ifndef CALCGUARD
#define CALCGUARD
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
/**
 * struct op_t - sad structure
 * @op: operator
 * @f: function pair
 */
typedef struct op_t
{
	char *op;
	int (*f)(int, int);
} op_t;
#endif
