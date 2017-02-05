#include "hash_tables.h"
/**
 * hash_table_delete - print hashing table
 * @ht: The hashing table
 */
void hash_table_delete(hash_table_t *ht)
{
     unsigned int i, flag;
     hash_node_t *tmp, *freeing;

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
			freeing = tmp;
               tmp = tmp->next;
			free(freeing->key);
			free(freeing->value);
			free(freeing);
          }
     }
     printf("}\n");
	free(ht->array);
	free(ht);
}
