#include "lists.h"

/**
 * dlistint_len - number elements doubly linked lists
 * @h: the head
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
