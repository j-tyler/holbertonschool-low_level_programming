#include "lists.h"
/**
 * get_nodeint_at_index - Return node at index
 * @head: Head of the list
 * @index: index to retrieve node from
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmpnode;

	i = 0, tmpnode = head;
	while (i < index && tmpnode != NULL)
	{
		tmpnode = tmpnode->next;
		i++;
	}
	if (i == index)
		return (tmpnode);
	else
		return (NULL);
}
