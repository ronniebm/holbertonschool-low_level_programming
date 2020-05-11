#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a listint_t list.
 *
 * @head: head of node.
 * @n: data to be added.
 *
 * Return: address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
