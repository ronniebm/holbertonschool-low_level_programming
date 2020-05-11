#include "holberton.h"

/**
 * jack_bauer - print the absolute value of an integer.
 *
 * Return: every minute.
 */
void jack_bauer(void)
{
{
int h, m;

for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
}
