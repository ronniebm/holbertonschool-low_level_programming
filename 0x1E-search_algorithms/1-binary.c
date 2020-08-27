#include "search_algos.h"

/**
 * b_search_rec - binary search recursion aux.function.
 * @array: pointer to array of integers.
 * @left: left index position for eval start in the array.
 * @right: right index position for eval end in the array.
 * @val: value to be searched inside the array (int).
 *
 * Return: index pos. if match, -1 if not found.
 */

int b_search_rec(int *array, int left, int right, int val)
{
	int i;

	if (right >= left)
	{
		printf("Searching in array: ");

		for (i = left; i <= right - 1; i++)
		{
			printf("%d, ", array[i]);
		}

		printf("%d\n", array[i]);

		int mid = (left + (right - left) / 2);

		if (array[mid] == val)
		{
			return (mid);
		}

		if (array[mid] > val)
		{
			return (b_search_rec(array, left, mid - 1, val));
		}

		return (b_search_rec(array, mid + 1, right, val));
	}

	return (-1);
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
	int right = (int)size - 1;
	int left = 0;

	if (!array)
	{
		return (-1);
	}

	return (b_search_rec(array, left, right, value));
}
