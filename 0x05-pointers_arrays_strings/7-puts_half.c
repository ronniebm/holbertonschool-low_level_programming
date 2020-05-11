#include "holberton.h"

/**
 * puts_half - print second half of a string.
 * @str: The string
 *
 * Return: void.
 */

void puts_half(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
}
if (i + 1 % 2 != 0)
{
i = (i - 1) / 2;
}
i++;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
