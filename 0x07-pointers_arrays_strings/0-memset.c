#include "holberton.h"

/**
 * _memset - Set data for a memory zone allocation.
 * @s: a char pointer variable.
 * @b: data to write.
 * @n: integer value.
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int counter;

for (counter = 0; counter <= n - 1; counter++)
s[counter] = b;
return (s);
}
