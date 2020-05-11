#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @dest: a variable.
 * @src: a variable.
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int i;
int counter1 = 0;
int counter2 = 0;
int _start;
int _end;

for (i = 0; dest[i] != '\0'; i++)
counter1++;

for (i = 0; src[i] != '\0'; i++)
counter2++;

_start = counter1;
_end = counter1 + counter2;
counter1 = 0;

for (i = _start ; i <= _end; i++)
{
dest[i] = src[counter1];
counter1++;
}
i++;
dest[i] = '\0';

return (dest);
}
