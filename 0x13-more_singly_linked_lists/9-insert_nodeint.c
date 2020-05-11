#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: head of the list.
  * @idx: index position to insert the node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *copy;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		copy = *head;
		for (i = 0; i < idx - 1 && copy != NULL; i++)
		{
			copy = copy->next;
		}
		if (copy == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
