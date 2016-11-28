#include "lists.h"
/**
 * print_list - print all the elements of a list_t list
 * @h: the list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
