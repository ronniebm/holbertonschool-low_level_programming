#include "hash_tables.h"

/**
 * hash_table_print - a function that that prints a hash table.
 *
 * @ht: hash table to be printed.
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	unsigned long int index = 0, counter = 0, i;

	/*checking hash table, array, value and key*/
	if (!ht || !(ht->array))
		return;

	index = ht->size;

	/*counting hash nodes*/
	for (i = 0; i <= index; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
		counter++;
		ptr = ptr->next;
		}
	}

	/*printing the hash table*/
	printf("{");
	for (i = 0; i <= index; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			if (counter > 1)
				printf("'%s': '%s', ", ptr->key, ptr->value);
			else
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
			}

			ptr = ptr->next;
			counter--;
		}
	}
	printf("}\n");
}
