#include "lists.h"
/**
 * add_node - Add a node to the head of the list
 * @head: current head of the list
 * @str: new string to make node for new head
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = (*head);
	*head = new;

	new->str = strdup(str);
	i = 0;
	while (str[i] != '\0')
		i++;
	new->len = i;

	return (new);
}
