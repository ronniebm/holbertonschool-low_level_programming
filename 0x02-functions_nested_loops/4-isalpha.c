#include "holberton.h"

/**
 * _isalpha - it Verifies if it's an alphabetic character.
 * @c: prints an int
 * Return: 1 if it's true, else return 0.
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
