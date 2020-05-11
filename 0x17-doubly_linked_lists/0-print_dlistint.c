#include "lists.h"

/**
 * print_dlistint - print a dlistint_t list.
 *
 * @h: head of a dlistint_t list.
 *
 * Return: number of nodes in a dlistint_t list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
