#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: specification for size of diagonal.
 * Return: print a line.
 */
void print_diagonal(int n)
{
int i;
int s;

if (n > 0)  /* \ is 92, space is 32 */
{
for (i = 0; i <= (n - 1); i++)
{
for (s = 1; s <= i; s++)
_putchar(32);
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
