#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimun int value.
 * @max: maximun int value.
 * Return: a pointer.
 */

int *array_range(int min, int max)
{
int *ptr, i;

if (min > max)
	return (NULL);

ptr = malloc(sizeof(int) * (max - min + 1));

if (ptr == NULL)
	return (NULL);

for (i = 0; i <= (max - min); i++)
	ptr[i] = min + i;

return (ptr);
}
