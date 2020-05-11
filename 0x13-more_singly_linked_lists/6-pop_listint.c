#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: head of the list.
  * Return: returns the head node’s data (n).
  */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *copy;

	if (*head == NULL)
		return (0);
	copy = *head;
	i = copy->n;
	*head = copy->next;
	copy->n = '\0';
	copy->next = NULL;
	free(copy);
	return (i);
}
