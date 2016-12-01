#include "lists.h"
/**
 * print_listint - print all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
