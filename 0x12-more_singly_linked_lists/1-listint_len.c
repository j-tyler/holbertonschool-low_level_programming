#include "lists.h"
/**
 * listint_len - Return the number of elements in a listint_t list
 * @h: head of the list
 *
 * Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
		h = h->next, i++;

	return (i);
}
