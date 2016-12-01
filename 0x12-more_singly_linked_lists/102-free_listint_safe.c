#include "lists.h"
/**
 * _check_and_free - free a listint_t list
 * @head: head of the list
 * @prev: prev node in the list
 *
 * Return: number of nodes
 */
int _check_and_free(listint_t *head, listint_safe *prev)
{
	listint_safe node, *tmp;
	int count;

	if (head->next == NULL)
	{
		free(head);
		return (1);
	}

	node.next = prev;
	node.addy = head;
	tmp = node.next;
	while (tmp != NULL && tmp->addy != head)
		tmp = tmp->next;
	if (tmp != NULL)
		return (0);

	count = 1;
	count += _check_and_free(head->next, &node);
	free(head);
	return (count);
}
/**
 * free_listint_safe - free a listint_t safely
 * @h: head of list
 *
 * Return: size of list free'd
 */
size_t free_listint_safe(listint_t **h)
{
	int total;

	if (*h == NULL)
		return (0);

	total = _check_and_free(*h, NULL);
	*h = NULL;
	return (total);
}
