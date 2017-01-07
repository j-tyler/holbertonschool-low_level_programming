#include "lists.h"
/**
 * free_dlistint - Free a dlistint_t list
 * @head: Head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
