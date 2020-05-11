#include "lists.h"

/**
 * get_dnodeint_at_index - get a node located into an index position.
 *
 * @head: head of a dlistint_t list.
 * @index: index position in the list.
 * Return: adress of the node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);

		head = head->next;
	}
	return (NULL);
}
