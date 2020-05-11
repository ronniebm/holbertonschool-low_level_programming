#include "holberton.h"

/**
 * rev_string - it reverses an array.
 * @s: The string
 *
 * Return: void.
 */

void rev_string(char *s)
{
int n;
int r = 0;
char copy[*s];

for (n = 0; s[n] != '\0'; n++)
{
copy[n] = s[n];
}
for (n = n - 1; n >= 0; n--)
{
s[n] = copy[r];
r++;
}
}
