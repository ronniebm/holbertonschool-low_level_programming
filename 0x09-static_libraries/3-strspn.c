#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: char pointer variable, main string.
 * @accept: char pointer variable, prefix substring.
 *
 * Return: an address.
 */

unsigned int _strspn(char *s, char *accept)
{

int i;
int j;
unsigned int r = 0;
unsigned int check;
int counter1 = 0;

for (i = 0; accept[i] != '\0'; i++)
counter1++;

for (i = 0; s[i] != '\0'; i++)
{

check = r;
for (j = 0; j <= counter1; j++)
{

if (s[i] == accept[j])
r++;
}

if (check == r)
break;
}

return (r);
}
