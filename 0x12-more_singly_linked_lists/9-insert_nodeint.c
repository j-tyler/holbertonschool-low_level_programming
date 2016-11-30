#include "lists.h"
/**
 * insert_nodeint_at_index - add node to listint_t list at index given
 * @head: head of the list
 * @index: index to put new node
 * @n: int to store in node
 *
 * Return: Address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	int i;
	listint_t *tmpnode, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	i = 0, tmpnode = *head;
	while (i < index - 1 && tmpnode != NULL)
	{
		tmpnode = tmpnode->next;
		i++;
	}
	if (i != index - 1)
		return (NULL);

	new->n = n;
	new->next = tmpnode->next;
	tmpnode->next = new;

	return (new);
}
