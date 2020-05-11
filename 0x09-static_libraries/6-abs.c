#include "holberton.h"

/**
 * _abs - print the absolute value of an integer.
 *@n: prints an int.
 * Return: it returns the absolute value.
 */
int _abs(int n)
{
if (n <= 0)
{
n = (n * -1);
return (n);
}
return (n);
}
