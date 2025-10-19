#include "hash_tables.h"

/**
 * hash_table_create - function that creates a new hash table
 * @size: the dize of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tmp = NULL;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);

	tmp = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!tmp)
		return (NULL);

	tmp->size = size;
	tmp->array = malloc(sizeof(hash_table_t *) * size);
	if (!tmp->array)
	{
		free(tmp);
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		tmp->array[count] = NULL;
	}

	return (tmp);
}
