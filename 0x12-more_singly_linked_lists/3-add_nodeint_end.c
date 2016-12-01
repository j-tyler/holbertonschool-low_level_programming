#include "lists.h"
/**
 * add_nodeint_end - Add node at end of listint_t list
 * @head: Head of the list
 * @n: integer to store in node
 *
 * Return: Address of new node, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	new->next = NULL;
	new->n = n;

	return (new);
}
