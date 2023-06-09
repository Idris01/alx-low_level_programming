#include "hash_tables.h"
/**
 * hash_table_set - Place an element in a hash table
 * @ht: address of the hash table
 * @key: hash key for the given element
 * @value: value of the new element
 *
 * Return: 1 if element successfully  added else
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	size_t loc;

	if (ht == NULL || key == NULL || is_empty(key))
		return (0);
	loc = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (new->key == NULL)
		return (0);

	strcpy(new->value, value);
	strcpy(new->key, key);
	new->next = NULL;

	if ((ht->array)[loc] == NULL)
		(ht->array)[loc] = new;
	else
	{
		new->next = (ht->array)[loc];
		(ht->array)[loc] = new;
	}
	return (1);
}

/**
 * is_empty - Checks if a string contain only spaces
 * @key: string to check
 *
 * Return: 1 if true otherwise
 */
int is_empty(const char *key)
{
	char c;

	while ((c = *key++))
	{
		switch (c)
		{
			case ' ':
			case '\n':
			case '\t':
				break;
			default:
				return (0);
		}
	}
	return (1);
}
