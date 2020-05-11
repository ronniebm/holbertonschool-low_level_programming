#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 *
 * @head: head of a dlistint_t list.
 * Return: adress of the node.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	int sum = 0;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
