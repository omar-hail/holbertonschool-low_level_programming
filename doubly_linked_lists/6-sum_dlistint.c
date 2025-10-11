#include "lists.h"

/**
 * sum_dlistint - sum of all data of a dlistint_t list
 * @head: the head of the dlistint_t list
 * Return: the sum of all data of the dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
