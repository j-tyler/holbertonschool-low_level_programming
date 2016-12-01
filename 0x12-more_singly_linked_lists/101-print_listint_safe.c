#include "lists.h"
/**
 * _check_and_print - Check the list recursively and print
 * @head: head of newlist to check
 * @prev: current node on list to check
 *
 * Return: number of nodes
 */
int _check_and_print(const listint_t *head, listint_safe *prev)
{
	listint_safe node, *tmp;

	if (head->next == NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		return (1);
	}

	node.next = prev;
	node.addy = head;
	tmp = node.next;
	while (tmp != NULL && tmp->addy != head)
		tmp = tmp->next;
	if (tmp != NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (0);
	}

	printf("[%p] %d\n", (void *)head, head->n);

	return (1 + _check_and_print(head->next, &node));
}
/**
 * print_listint_safe - Print a linkint_t with user error safety
 * @head: head of the string
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		return (0);

	return (_check_and_print(head, NULL));
}
