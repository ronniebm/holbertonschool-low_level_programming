#include "lists.h"

/**
 * free_listint - it makes free memory to a list_t list.
 * @head: head of the list.
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *copy;

	while (head != NULL)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
}
