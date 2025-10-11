#include "lists.h"

/**
 * add_dnodeint - add a node at the begining of a dlistint_t list
 * @head: the head of the list
 * @n: the new data
 * Return: adress of the node added, of NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	*head = new;
	new->n = n;
	new->prev = NULL;

	if (!aux)
		new->next = NULL;
	else
	{
		new->next = aux;
		aux->prev = *head;
		aux = NULL;
	}

	return (new);
}
