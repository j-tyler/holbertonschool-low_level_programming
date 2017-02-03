#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the table to create
 * Return: Pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *creation;

	if (size == 0)
		return (NULL);
	creation = malloc(sizeof(hash_table_t));
	if (creation == NULL)
		return (NULL);
	creation->array = malloc(sizeof(char *) * size);
	if (creation->array == NULL)
	{
		free(creation);
		return (NULL);
	}
	memset(creation->array, '\0', size);
	creation->size = size;
	return creation;
}
