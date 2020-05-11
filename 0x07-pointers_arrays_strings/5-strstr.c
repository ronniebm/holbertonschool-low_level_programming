#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: pointer to main string.
 * @needle: pointer to substring.
 *
 * Return: a pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{

while (*haystack != '\0')
{
char *start = haystack;
char *match = needle;

while (*match == *haystack && *match != '\0'
&& *haystack != '\0')
{
haystack++;
match++;
}

if (*match == '\0')
return (start);

haystack = start + 1;
}
return (NULL);
}
