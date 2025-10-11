#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: the head dlistint_t list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_dlistint;

	while (head)
	{
		free_dlistint = head;
		head = head->next;
		free(free_dlistint);
	}
}
