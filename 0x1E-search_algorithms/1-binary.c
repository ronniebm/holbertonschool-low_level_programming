#include "search_algos.h"


/**
 * print - it prints a given array.
 *
 * @array: pointer of the given array.
 * @left: first index in the given array.
 * @right: last index in the given array.
 */
void print(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");

	for (i = left; i < right - 1; i++)
	{
		printf("%d, ", array[i]);
	}

	printf("%d\n", array[i]);

}


/**
 * binary_search - It searchs for a value in an int array.
 * @array: pointer to array of integers.
 * @size: size of array (signed int).
 * @value: value to be searched (int).
 *
 * Return: index pos. if match, -1 if not found or NULL array.
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = (int)size - 1;

	while (left <= right)
	{
		print(array, left, (right + 1));

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid;

		else if (array[mid] < value)
			left = (mid + 1);
	}

	return (-1);
}

