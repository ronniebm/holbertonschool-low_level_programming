#include "holberton.h"

/**
 * swap_int - it swaps values in variables a & b.
 * @a: first value
 * @b: second value
 * Return: swapped values .
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
