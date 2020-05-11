#include "lists.h"

/**
  * delete_nodeint_at_index - delete a node in a linked list.
  * @head: head of the list.
  * @index: index of node to be deleted.
  * Return: pointer to head of list.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *copy, *posterior;

	if (!head || !*head)
		return (-1);
	copy = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		copy = copy->next;
		if (copy == NULL)
			return (-1);
	}
	posterior = copy->next;
	copy->next = posterior->next;
	free(posterior);
	return (1);
}
