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
/**
 * free_listint2 - free a listint_t list
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		free_listint(*head);
		*head = NULL;
		/* Required to compile */
		if (*head == NULL)
		{ ; }
	}
}
