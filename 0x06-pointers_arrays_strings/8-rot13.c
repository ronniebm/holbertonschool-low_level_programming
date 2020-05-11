#include "holberton.h"

/**
 * rot13 - it rotates characters 13 places in the alphabet
 * @s: type char pointer.
 * Return: string rotated ROT13.
 */

char *rot13(char *s)
{
int x;
int y;

char nor[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (x = 0; s[x] != 0; x++)
{

for (y = 0; nor[y] != '\0'; y++)
{

if (s[x] == nor[y])
{
s[x] = rot[y];
break;
}

}

}
return (s);
}
