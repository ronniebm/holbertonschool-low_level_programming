#include "holberton.h"

/**
 * _sqrt_recursion - squared root of a number.
 * @n: value.
 * Return: integer.
 */

int _sqrt_recursion(int n)
{
return (compare(n, 1));
}


/**
 * compare - comparing sub-routine.
 * @n: value a.
 * @y: value b.
 * Return: natural squared root of "n".
 */

int compare(int n, int y)
{

if (y * y == n)
return (y);

else if (y * y > n)
return (-1);

else
return (compare(n, y + 1));

}
