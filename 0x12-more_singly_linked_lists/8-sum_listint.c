#include "lists.h"
/**
 * sum_listint - Sum all the integers in a listint_t list
 * @head: head of the list
 *
 * Return: sum of integers in list
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmpnode;

	if (head == NULL)
		return (0);

	sum = 0, tmpnode = head;
	while (tmpnode != NULL)
	{
		sum += tmpnode->n;
		tmpnode = tmpnode->next;
	}

	return (sum);
}
