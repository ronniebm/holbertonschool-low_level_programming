#include "holberton.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *c)
{
int i;

for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 97 && c[i] < 123)
c[i] = c[i] - 32;
}

return (c);
}
