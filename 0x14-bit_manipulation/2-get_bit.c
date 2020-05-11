#include "holberton.h"

/**
 * get_bit - this function returns the "n" bit of a number.
 * @n: the number, unsigned long int type.
 * @index: a given index, starting from 0 (less significative bit).
 *
 * Return: two possible outputs
 * 1. if successful, it returns the value of bit at index.
 * 2. if error, it returns -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* if index is longer than an long int */
	/* then, return -1 */
	if (index > 64)
	{
		return (-1);
	}
	/* if not, right shift n by index */
	/* return the value of bit */
	else
	{
		n = (n >> index);
		return (n & 1);
	}
}
