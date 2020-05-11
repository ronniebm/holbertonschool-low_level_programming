#include "holberton.h"

/**
 * print_rev - prints a string in reverse.
 * @s: Parameters of function*.
 * Return: void.
 */

void print_rev(char *s)
{
int n;
int counter = 0;
int d;

for (n = 0; s[n] != '\0'; n++)
counter++;
for (d = counter - 1; d >= 0; d--)
_putchar(s[d]);
_putchar('\n');
}
