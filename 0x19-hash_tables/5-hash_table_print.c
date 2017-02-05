#include "hash_tables.h"
/**
 * hash_table_print - print a hashing table
 * @ht: The hashing table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag;
	hash_node_t *tmp;

	if (ht == NULL)
	{
		return;
		printf("{}\n");
	}
	printf("{");
	flag = 0;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag)
				printf(", ");
			flag = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
