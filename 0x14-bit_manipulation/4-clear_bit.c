#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to an unsigned long int number.
 * @index: bit position starting from 0 (less significative position).
 * Return: a value with the changes.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
/* is index greater than 64bits?*/
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
