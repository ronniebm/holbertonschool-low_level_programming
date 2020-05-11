#include <stdio.h>

/**
 * int_index - a function that searches for an integer.
 * @array: the array of integers.
 * @size: numbers of elements in the array.
 * @cmp: a pointer to the function to be used to compare.
 *
 * Return: the match position of the element in the array.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
