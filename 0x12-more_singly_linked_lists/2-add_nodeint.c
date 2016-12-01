#include "lists.h"
/**
 * add_nodeint - Add a new node at beginning of a listint_t list
 * @head: head of the list
 * @n: int to store in node
 *
 * Return: Address of the new element, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
