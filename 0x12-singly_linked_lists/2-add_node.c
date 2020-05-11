#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list..
 * @head: the head.
 * @str: a string.
 * Return: starting node in a linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;

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
	if (head == NULL)
		return (NULL);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
