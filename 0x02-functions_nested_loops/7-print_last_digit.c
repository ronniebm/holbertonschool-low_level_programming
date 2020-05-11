#include "holberton.h"

/**
 * print_last_digit - print the absolute value of an integer** .
 *@n: prints the last digit.
 * Return: last digit.
 */
int print_last_digit(int n)
{
n = (n % 10);
if (n < 0)
{
n = (n * -1);
}
_putchar(n + '0');
return (n);
}
