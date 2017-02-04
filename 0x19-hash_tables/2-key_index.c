#include "hash_tables.h"
/**
 * key_index - Give the index of a key in hash table
 * @key: the key to look for
 * @size: the size of the hash table
 * Return: Index of key in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
