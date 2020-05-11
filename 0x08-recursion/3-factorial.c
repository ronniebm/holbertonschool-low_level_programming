#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: a number.
 * Return: factorial of the number "n".
 */

int factorial(int n)
{
if (n < 0)
return (-1);

else if (n >= 1)
return (n * factorial(n - 1));

else
return (1);
}
