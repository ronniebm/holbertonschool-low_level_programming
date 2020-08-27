#include "search_algos.h"

/**
 * linear_search - It searchs for a value in an int array.
 * @array: pointer to array of integers.
 * @size: size of array (signed int).
 * @value: value to be searched (int).
 *
 * Return: Nothing.
 */

int linear_search(int *array, size_t size, int value)
{
int i;
int max = ((int)size - 1);

if (!array)
{
	return (-1);
}

for (i = 0; i <= max; i++)
{
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (array[i] == value)
		{
		return (i);
		}
}
return (-1);
}
