#include "main.h"

/**
 * print_dlistint -  print doubly linked list
 * @h: the head
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
