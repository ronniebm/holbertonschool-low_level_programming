#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: amount of bytes.
 * @size: number of elements.
 *
 * Return: a pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);

for (i = 0; i < (nmemb * size); i++)
	ptr[i] = 0;

return (ptr);
}
