#include "lists.h"
/**
 * reverse_listint - Reverse a listint_t list
 * @head: head of the list
 *
 * Return: pointer to head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *coming, *going;

	coming = NULL;
	while (*head != NULL)
	{
		going = (*head)->next;
		(*head)->next = coming;
		coming = *head;
		*head = going;
	}
	*head = coming;

	return (*head);
}
