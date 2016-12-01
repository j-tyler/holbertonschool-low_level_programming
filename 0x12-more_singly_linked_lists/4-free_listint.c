#include "lists.h"
/**
 * free_listint - free a listint_t list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
