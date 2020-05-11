#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - ss
 * @s1: string 1
 * @s2: string 2
 * @n: number
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *ptr;


if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;

for (j = 0; s2[j] != '\0'; j++)
;

if (n >= j)
	n = j;

ptr = malloc(1 + (i + n) * sizeof(*ptr));

if (ptr == NULL)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
	ptr[i] = s1[i];

for (j = 0; j < n; j++, i++)
	ptr[i] = s2[j];

ptr[i] = '\0';

return (ptr);
}
