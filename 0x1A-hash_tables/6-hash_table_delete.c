#include "hash_tables.h"
/**
 * hash_table_delete - Delete a given hash table
 * @ht: hash table to delete
 *
 * Return: always void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *itr;
	size_t cnt = 0;

	if (ht == NULL)
		return;

	for (; cnt < ht->size; cnt++)
	{
		temp = (ht->array)[cnt];
		for (; temp != NULL;)
		{
			itr = temp;
			temp = temp->next;
			free(itr->value);
			free(itr->key);
			free(itr);
		}
	}
	free(ht->array);
	free(ht);
}
