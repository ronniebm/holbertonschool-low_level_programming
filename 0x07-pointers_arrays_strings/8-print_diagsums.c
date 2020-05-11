#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals sqrd matrix.
 * @a: pointer to int array.
 * @size: size of array.
 *
 * Return: void.
 */

void	print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
if (i)
a += size;
sum1 += *(a + i);
sum2 += *(a + (size - i - 1));
}
printf("%d, %d\n", sum1, sum2);
}
