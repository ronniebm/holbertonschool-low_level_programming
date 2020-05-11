#include "holberton.h"

/**
* _strncpy - a function that copies a string.
* @dest: a variable.
* @src: a variable.
* @n: number of characters.
* Return: concatenates n characters from a source string.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
