#include "lists.h"
/**
 * dlistint_len - Return number of elements in list
 * @h: head of list
 *
 * Return: Number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	int i;

	if (h == NULL)
		return (0);
	i = 1;
	tmp = h->prev;
	while (tmp != NULL)
		i++, tmp = tmp->prev;
	tmp = h->next;
	while (tmp != NULL)
		i++, tmp = tmp->next;
	return (i);
}
