#include "lists.h"

/**
 * add_dnodeint_end - new node at the end of a dlistint_t list
 * @head: the head of the dlistint_t list
 * @n: new data
 * Return: the number of elements in the dlistint_t list, if failed NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *last_node = *head;

	tmp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;

	if (!*head)
	{
		*head = tmp;
		return (tmp);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = tmp;

	tmp->next = NULL;
	tmp->prev = last_node;

	return (tmp);
}
