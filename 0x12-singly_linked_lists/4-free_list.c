#include "lists.h"

/**
 * free_list - it makes free memory to a list_t list.
 * @head: head of the list.
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
