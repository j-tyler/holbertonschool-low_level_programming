#include "lists.h"
/**
 * sum_dlistint - Sum the values in a dlistint
 * @head: head of a list
 *
 * Return: Sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
