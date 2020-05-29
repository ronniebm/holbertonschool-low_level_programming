#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 *
 * @ht: hash table to be deleted.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *ptr = NULL, *ptr_next = NULL;

	/*checking given hash table*/
	if (!ht || !(ht->array))
		return;

	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			ptr_next = ptr->next;
			free(ptr->value);
			free(ptr->key);
			free(ptr);
			ptr = ptr_next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
