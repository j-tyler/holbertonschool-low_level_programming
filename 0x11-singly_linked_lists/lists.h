#ifndef _LINKS_H
#define _LINKS_H
#include <stdio.h>
/**
 * struct list_t - a linked list with str, length of name, and pointer
 * @str: the nodes string
 * @len: length of str
 * @next: next node in the list
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
