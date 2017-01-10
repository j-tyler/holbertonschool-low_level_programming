#include "lists.h"
/**
 * _create_node - create node at given location
 * @next: item to link this node to
 * @n: number to store
 *
 * Return: Address of node
 */
dlistint_t *_create_node(dlistint_t *next, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->next = next;
	node->n = n;
	if (next != NULL)
		next->prev = node;

	return (node);
}
/**
 * add_dnodeint_end - Add node at end of list
 * @head: head of the list
 * @n: number to store
 *
 * Return: Address of new node, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmpnode;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = _create_node(NULL, n);
		return (*head);
	}

	/* Find end of the list */
	tmpnode = *head;
	while (tmpnode->next != NULL)
		tmpnode = tmpnode->next;
	tmpnode->next = _create_node(NULL, n);
	tmpnode->next->prev = tmpnode;
	return (tmpnode->next);
}
