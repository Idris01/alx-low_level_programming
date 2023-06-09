#include "hash_tables.h"
/**
 * key_index - Generate index for a given hash key
 * @key: pointer to string representing hash key
 * @size: unsigned long int size of the hash table
 *
 * Return: index of the key on the in the hash_table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t index = hash_djb2(key);
	size_t location = index % size;

	return (location);
}
