#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head.
 * @str: a string.
 * Return: starting node in a linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new_node, *temp;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	i = 0;
	while (new_node->str[i] != '\0')
		i++;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
