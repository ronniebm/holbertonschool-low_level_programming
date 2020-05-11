#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returns a pointer to a newly allocated space in memory.
 * @s1: first string.
 * @s2: second string
 *
 * Return: a pointer to the new allocated string.
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int i;
int counter1 = 0;
int counter2 = 1;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

for (i = 0; s1[i] != '\0'; i++)
	counter1++;

for (i = 0; s2[i] != '\0'; i++)
	counter2++;

p = malloc(counter1 + counter2);

if (p == NULL)
	return (NULL);

for (i = 0; i < counter1; i++)
	p[i] = s1[i];

for (i = 0; i < counter2; i++)
	p[counter1 + i] = s2[i];

return (p);
}
