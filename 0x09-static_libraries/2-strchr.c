#include "holberton.h"

/**
 * _strchr - it returns an address of first character match.
 * @s: char pointer variable.
 * @c: char to find.
 *
 * Return: an address.
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (*(s + i))
{
if (*(s + i) == c)
return (s + i);
i++;
}

if (c == '\0')
return (s + i);
return ('\0');
}
