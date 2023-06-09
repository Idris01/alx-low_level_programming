#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table of given size
 * @size: unsigned long int number of nodes in table
 *
 * Return: address of table if successfull else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t) * size);

	return (table);
}
