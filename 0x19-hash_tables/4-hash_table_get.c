#include "hash_tables.h"
/**
 * hash_table_get - Retrieve a value from a key in hash table
 * @ht: Hashing table
 * @key: Key to search for
 * Return: Value attached to key, NULL if key doesn't exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	return (key_value(ht->array[index], key));
}
