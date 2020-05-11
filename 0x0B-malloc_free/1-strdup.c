#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: a string.
 *
 * Return: a pointer.
 */

char *_strdup(char *str)
{
char *p;
int i;
int counter = 1;

if (str == NULL)
	return (NULL);

for (i = 0; str[i] != '\0'; i++)
	counter++;

p = malloc(counter);

if (p == NULL)
	return (NULL);

for (i = 0; i < counter; i++)
p[i] = str[i];

return (p);
}
