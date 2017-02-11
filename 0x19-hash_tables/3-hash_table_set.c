#include "hash_tables.h"
/**
 * hash_table_set - Add a element to the hash table
 * @ht: The hashing table
 * @key: Key to add
 * @value: Value for the the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	return (key_insert(&ht->array[index], key, value));
}
/**
 * key_exists - find if key exists in hash bucket
 * @h: start of hash bucket
 * @key: key to search for
 * Return: pointer to node, NULL if not found
 */
hash_node_t *key_exists(hash_node_t *h, const char *key)
{
	hash_node_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		if (key_match(key, tmp->key))
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
/**
 * key_match - Check keys for matchs
 * @k1: first key
 * @k2: second key
 * Return: 1 if match, 0 if no match
 */
int key_match(const char *k1, const char *k2)
{
	int i;

	i = 0;
	while (k1[i] == k2[i])
	{
		if (k1[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}
/**
 * key_value - return value from key
 * @h: start of hash bucket
 * @key: key to search for
 * Return: Value found, NULL if not in table
 */
char *key_value(hash_node_t *h, const char *key)
{
	hash_node_t *tmp;

	tmp = key_exists(h, key);
	if (tmp)
		return (tmp->value);
	return (NULL);
}
/**
 * key_insert - insert a key into the hash bucket
 * @h: Address of the hashing bucket
 * @key: key to save
 * @value: value to save
 * Return: 1 on success, 0 on failure
 */
int key_insert(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *tmp, *newnode;

	tmp = key_exists(*h, key);
	if (tmp)
	{
		newnode = tmp;
	}
	else
	{
		newnode = malloc(sizeof(hash_node_t));
		if (newnode == NULL)
			return (0);
	}
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = *h;
	*h = newnode;
	return (1);
}
