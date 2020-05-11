#include "holberton.h"

/**
 * reverse_array - a function that reverses an array.
 * @a: an int pointer.
 * @n: an ing variable.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
int i = 0;
int t;

while (i < (n / 2))
{
t = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = t;
i++;
}

}
