#include "holberton.h"

/**
 * print_line - prints a line of lengh = n with underscore.
 * @n: specification for lengh of the line.
 * Return: print a line.
 */
void print_line(int n)
{
int i;

if (n > 0)  /* _ is 95 */
{
for (i = 1; i <= n; i++)
_putchar(95);
}
_putchar('\n');
}
