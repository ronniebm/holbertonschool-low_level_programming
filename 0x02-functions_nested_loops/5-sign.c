#include "holberton.h"

/**
 * print_sign - writes +, or -, or just a ZERO.
 *@n: prints an int
 * Return: ** .
 */

int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
