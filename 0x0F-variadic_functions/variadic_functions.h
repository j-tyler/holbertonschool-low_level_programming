#ifndef VARIADIC_H
#define VARIADIC_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct printer - finds the function to use for print_all
 * @c: character to match
 * @f: function for that character
 */
typedef struct printer
{
	char *c;
	void (*f)();
} printer;
#endif
