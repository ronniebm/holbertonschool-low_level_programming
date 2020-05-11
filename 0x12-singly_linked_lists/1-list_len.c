#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - it counts number of elements in a linked list.
 * @h: a pointer to the struct.
 * Return: number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
