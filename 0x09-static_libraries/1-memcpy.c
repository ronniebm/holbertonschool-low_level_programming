#include "holberton.h"

/**
 * _memcpy - copy a memory location to another.
 * @dest: it's buffer's destiny memory.
 * @src: buffer memory to be copyed.
 * @n: number of allocations to be copyed.
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int counter;

for (counter = 0; counter <= n - 1; counter++)
dest[counter] = src[counter];
return (dest);
}
