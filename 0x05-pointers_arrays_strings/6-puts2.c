#include "holberton.h"

/**
 * puts2 - print every other character of a string.
 * @str: The string.
 *
 * Return: void.
 */

void puts2(char *str)
{
int n;
char t;

for (n = 0; str[n] != '\0'; n++)
{
if (n % 2 == 0)
{
t = str[n];
_putchar(t);
}
}
_putchar('\n');
}
