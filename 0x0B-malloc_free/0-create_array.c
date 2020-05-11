#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars with letter "H".
 * @size: size of array
 * @c: Character to store
 *
 * Return: a memory address.
 */

char *create_array(unsigned int size, char c)
{

char *arr;
unsigned int i;

if (size == 0)
	return (NULL);

arr = malloc(size * sizeof(c));

if (arr == NULL)
	return (NULL);

for (i = 0; i < size; i++)
	arr[i] = c;

return (arr);
}
