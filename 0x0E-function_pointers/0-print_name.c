#include "function_pointers.h"
/**
 * print_name - Sends the string to the function specified
 * @name: String to send to function
 * @f: function to send string to
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
