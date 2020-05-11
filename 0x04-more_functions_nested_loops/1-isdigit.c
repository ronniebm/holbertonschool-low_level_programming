#include "holberton.h"

/**
 * _isdigit - check if argument is a digit.
 *@c: argument for function
 * Return: 1 if a digit, 0 if not.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
{
return (0);
}
}
