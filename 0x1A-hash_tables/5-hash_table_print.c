#include "hash_tables.h"
/**
 * hash_table_print - Prints all elements in a hash table
 * @ht: pointer to hash table
 *
 * Return: always void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	size_t idx = 0;
	size_t prt_cnt = 0;

	if (ht != NULL)
	{
		printf("{");
		for (; idx < ht->size; idx++)
		{
			if (((ht->array)[idx] != NULL))
			{
				temp = (ht->array)[idx];
				for (; temp != NULL; prt_cnt++, temp = temp->next)
				{
					if (prt_cnt != 0)
						printf(", ");
					printf("'%s': ", temp->key);
					printf("'%s'", temp->value);
				}
			}
		}
		printf("}\n");
	}
}
