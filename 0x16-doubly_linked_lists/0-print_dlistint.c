#include "lists.h"
/**
 * print_dlistint - Print all the elements of a dlistint_t list
 * @h: head of list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	int i;

	if (h == NULL)
		return (0);
	i = 1;
	printf("%d\n", h->n);
	tmp = h->prev;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
		i++;
	}
	tmp = h->next;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}

	return (i);
}
