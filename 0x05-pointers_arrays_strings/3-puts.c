#include "holberton.h"


/**
 *_puts - check the code for Holberton School students.
 *@str: Parameter
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
int n;
for (n = 0 ; str[n] != '\0'; n++)
_putchar(str[n]);
_putchar('\n');
}
