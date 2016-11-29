#include "lists.h"
/**
 * free_list - free all space malloced for our list_t linked list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
