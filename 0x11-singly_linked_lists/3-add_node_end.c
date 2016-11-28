#include "lists.h"
/**
 * add_node_end - Add node to end of linked list
 * @head: head of the list
 * @str: string for node
 *
 * Return: address to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*head = new;

	new->next = NULL;
	new->str = strdup(str);
	i = 0;
	while (str[i] != '\0')
		i++;
	new->len = i;

	return (new);
}
