#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list.
 * @h: a pointer to the struct.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
