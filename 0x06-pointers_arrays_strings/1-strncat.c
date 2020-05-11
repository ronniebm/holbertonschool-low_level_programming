#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 * @dest: a variable.
 * @src: a variable.
 * @n: number of characters.
 * Return: concatenates n characters from a source string.
 */

char *_strncat(char *dest, char *src, int n)
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
_end = counter1 + n - 1;
counter1 = 0;

for (i = _start ; i <= _end; i++)
{

if (src[counter1] != '\0')
{
dest[i] = src[counter1];
counter1++;
}

else
break;

}
i++;
dest[i] = '\0';
return (dest);
}
