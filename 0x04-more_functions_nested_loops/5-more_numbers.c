#include "holberton.h"

/**
 * more_numbers - prints ten lines of numbers, from 0 to 14.
 *
 * Return: print ten lines of numbers, from 0 to 14.
 */
void more_numbers(void)
{
int i;
int l;
int n;
int count = 0;

for (l = 0; l <= 9; l++)
{
for (n = 0 ; n <= 1; n++)
{
for (i = 48 ; i <= 57; i++)
{
if (count <= 14)
{
if (n == 1 && i <= 52)
{
_putchar(49);
}
_putchar(i);
count = count + 1;
}
}
}
count = 0;
_putchar('\n');
}
}
