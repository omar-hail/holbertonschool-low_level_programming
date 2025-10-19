#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int index = 0;
	char *sep = "";

	if (!ht)
		return;

	printf("{");
	while (index < ht->size)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			printf("%s", sep);
			printf("'%s': '%s'", tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
		index++;
	}
	printf("}\n");
}
