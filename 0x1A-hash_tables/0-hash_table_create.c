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
	hash_node_t **array = NULL;
	size_t counter = 0;

	table = malloc(sizeof(hash_table_t));
	array = malloc(sizeof(hash_node_t *) * size);
	if (table == NULL || array == NULL)
		return (NULL);
	for (; counter < size; counter++)
		array[counter] = NULL;

	table->size = size;
	table->array = array;
	return (table);
}
