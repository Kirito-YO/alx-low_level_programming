#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: var1
 * @size: var2
 * Return: index at which the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2((const unsigned char *)key);
	return (hash % size);
}
