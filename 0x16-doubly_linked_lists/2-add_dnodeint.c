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

	return (node);
}
/**
 * add_dnodeint - Add a node at the beginning of the list
 * @head: head of the list
 * @n: number to store
 *
 * Return: Address of the new node, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmpnode;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = _create_node(NULL, n);
		return (*head);
	}

	/* Find the beginning of the list */
	tmpnode = *head;
	while (tmpnode->prev != NULL)
		tmpnode = tmpnode->prev;
	*head = _create_node(tmpnode, n);
	return (*head);
}
