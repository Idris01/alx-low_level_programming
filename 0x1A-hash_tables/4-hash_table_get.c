#include "hash_tables.h"
/**
 * hash_table_get - Get value of a given key in a hash table
 * @ht: address of the hash table
 * @key: key to value of in the hash table
 *
 * Return: value if found else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t loc;
	hash_node_t *temp;

	if (key == NULL || is_empty(key) || ht == NULL)
		return (NULL);

	loc = key_index((unsigned char *)key, ht->size);

	temp = (ht->array)[loc];

	if (temp == NULL)
		return (NULL);

	for (; temp != NULL; temp = temp->next)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
	}
	return (NULL);
}
