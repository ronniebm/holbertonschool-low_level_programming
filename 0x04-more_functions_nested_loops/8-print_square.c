#include "holberton.h"

/**
 * print_square - prints areas.
 * @size: specification for the area size.
 * Return: print a line.
 */
void print_square(int size)
{
int i;
int s;
if (size > 0)  /* \ is 92, space is 32 */
{
for (i = 1; i <= size; i++)
{
for (s = 1; s <= size; s++)
_putchar(35);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
