#include "lists.h"
/**
 * pop_listint - pop the head of the list and return the int stored
 * @head: head of the list
 *
 * Return: int stored in head of list
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *oldhead;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	oldhead = *head;
	*head = (*head)->next;
	free(oldhead);

	return (data);
}
