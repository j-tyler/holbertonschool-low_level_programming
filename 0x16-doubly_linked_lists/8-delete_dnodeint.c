#include "lists.h"
/**
 * _delete_node - Delete a node
 * @node: node to delete
 */
void _delete_node(dlistint_t *node)
{
	if (node->next != NULL)
		node->next->prev = node->prev;
	if (node->prev != NULL)
		node->prev->next = node->next;

	free(node);
}
/**
 * delete_dnodeint_at_index - Delete a dnode
 * @head: head of list
 * @index: index to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		tmp = tmp->next;
		_delete_node(*head);
		*head = tmp;
		return (1);
	}
	i = 0;
	while (1)
	{
		if (tmp == NULL)
			return (-1);
		if (i == index)
			break;
		i++;
		tmp = tmp->next;
	}
	_delete_node(tmp);
	return (1);
}
