#include "holberton.h"

/**
 * flip_bits - it flip bits to convert one number into another number
 * @n: first number.
 * @m: second number.
 * Return: converted number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int counter;

	xor = n ^ m;
	counter = 0;

	while (xor)
	{
		counter++;
		xor &= (xor - 1);
	}

	return (counter);
}
