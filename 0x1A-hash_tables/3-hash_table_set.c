#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: a given hash table to add/update a key.
 * @key: a key, it can't be an empty string.
 * @value: value associated with the key.s
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *test = NULL;

	/*checking hash table, array, value and key*/
	if (!ht || !(ht->array) || !value || !key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	/* Collision testing*/
	test = ht->array[index];
	while (test)
	{
		if (strcmp(test->key, key) == 0)
		{
			free(test->value);
			test->value = strdup(value);
			return (1);
		}
		test = test->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
