#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 *
 * @size: size of the array.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx = 0;
	hash_table_t *new_table = NULL;

	/*creating a new hash table*/
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/*creating hash node array*/
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table->array);
		free(new_table);
		new_table = NULL;
	}

	/*setting each hash node to NULL*/
	while (idx < size)
	{
		new_table->array[idx] = NULL;
		idx++;
	}

	new_table->size = size;
	return (new_table);
}
