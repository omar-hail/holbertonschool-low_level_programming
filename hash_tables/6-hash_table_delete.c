#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *node_actual;
	unsigned long int index = 0;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			node_actual = (ht->array)[index];
			while (node_actual)
			{
				tmp = node_actual->next;
				free(node_actual->key);
				free(node_actual->value);
				free(node_actual);
				node_actual = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
