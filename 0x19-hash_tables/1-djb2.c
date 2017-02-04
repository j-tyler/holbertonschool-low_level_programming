#include "hash_tables.h"
/**
 * hash_djb2
 * @str
 * Return: djb2 hash value of string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while (c = *str++)
		hash = ((hash << 5) + hash) + c;

	return hash;
}
