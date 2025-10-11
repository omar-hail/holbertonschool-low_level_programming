#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given position
 * @h: the head of the dlistint_t list
 * @idx: the index of the node
 * @n: the data to insert into the dlistint_t list
 * Return: the address of the node added, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *prev_node = *h, *new;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (prev_node)
	{
		if (i == (idx - 1) && prev_node->next)
		{
			new = (dlistint_t *)malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);

			new->n = n;
			new->next = prev_node->next;
			new->prev = prev_node;
			prev_node->next = new;
			new->next->prev = new;
			return (new);
		}
		i++;
		prev_node = prev_node->next;
	}

	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
