#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1.
 * @n: pointer to an unsigned long int.
 * @index: bit position starting from 0 (less significative bit).
 *
 * Return: set value of "n" bit to 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
/* is index greater than 64bits?*/
	if (index > 64)
		return (-1);
	*n |= 1 << index;
	return (1);
}
