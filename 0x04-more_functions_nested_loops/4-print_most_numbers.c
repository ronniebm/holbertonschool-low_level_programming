#include "holberton.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 without 0 and 9.
 *
 * Return: numbers from 0 to 9 without 0 and 9.
 */
void print_most_numbers(void)
{
int i;
for (i = 48 ; i <= 57; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
