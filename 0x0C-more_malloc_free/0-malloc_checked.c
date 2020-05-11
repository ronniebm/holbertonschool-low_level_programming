#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Returns a pointer to the allocated memory.
 * @b: amount of bytes.
 * Return: a pointer.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
