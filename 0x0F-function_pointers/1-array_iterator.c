#include <stdio.h>
#define size_t int

/**
 * array_iterator - executes a function with a given parameter.
 * @array: a pointer to an array of integers.
 * @size: size of print.
 * @action: pointer to a function.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
