#include "lists.h"
/**
 * list_len - return the number of nodes in the list
 * @h: list_t pointer to head of list
 *
 * Return: Size of list
 */
size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
