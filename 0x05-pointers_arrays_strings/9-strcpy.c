#include "holberton.h"

/**
 * *_strcpy - a function to copy a string
 * @dest: a char string type.
 * @src: a char string type.
 * Return: it returns a pointer to "dest".
 */

char *_strcpy(char *dest, char *src)
{
int x;
int c = 0;

while (src[c] != '\0')
{
c++;
}
for (x = 0; x < c; x++)
{
dest[x] = src[x];
}
dest[c] = '\0';
return (dest);
}
