#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht: a given hash table you want to look into.
 * @key: a key you're looking for.
 * Return: Value if exist, NULL if doesn't exist.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *ptr = NULL;

	/*checking hash table, array, value and key*/
	if (!ht || !(ht->array) || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];

	/*traversing hash nodes*/
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			return (ptr->value);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
