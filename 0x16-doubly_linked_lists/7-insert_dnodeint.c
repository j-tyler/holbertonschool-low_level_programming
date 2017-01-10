#include "lists.h"
/**
 * _create_node_2 - create node at given location
 * @prev: Previous item on list
 * @next: item to link this node to
 * @n: number to store
 *
 * Return: Address of node
 */
dlistint_t *_create_node_2(dlistint_t *prev, dlistint_t *next, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = prev;
	node->next = next;
	node->n = n;
	if (prev != NULL)
		prev->next = node;

	return (node);
}
/**
 * insert_dnodeint_at_index - Insert node at index given
 * @h: head of list
 * @idx: index to insert
 * @n: value to store in node
 *
 * Return: Address of node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		if (*h == NULL)
			*h = _create_node_2(NULL, NULL, n);
		else
			*h = _create_node_2((*h)->prev, *h, n);
		return (*h);
	}
	i = 0;
	tmp = *h;
	while (1)
	{
		if (tmp == NULL)
			return (NULL);
		if (i == idx - 1)
			break;
		i++;
		tmp = tmp->next;
	}
	return (_create_node_2(tmp, tmp->next, n));
}
