#include "lists.h"

/**
 * get_dnodeint_at_index - print the nth node of a dlistint_t list
 * @head: the head of the dlistint_t list
 * @index: the index of the node
 * Return: the nth node of a dlistint_t list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (head);
}
