#include "list.h"
/**
 * free_list - free all space malloced for our list_t linked list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp

	tmp = head;
	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
	}
}
