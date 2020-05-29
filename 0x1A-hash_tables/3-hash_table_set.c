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
	if (!ht || !(ht->array) || !value || !key || strlen(key) == 0)
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

	printf("hash: %lu ", hash_djb2((const unsigned char *)key));
	printf("index: %ld\n", index);
	printf("key: %s, value: %s\n", (ht->array[index])->key, (ht->array[index])->value);
	printf("new node: %s, value: %s\n", new_node->key, new_node->value);
	printf("hash table size: %lu, array[%ld]: %p\n", ht->size, index, (void *)ht->array);
	return (1);
}
