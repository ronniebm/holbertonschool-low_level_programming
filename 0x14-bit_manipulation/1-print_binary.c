#include "holberton.h"

/**
 * print_binary - Print the binary representation of an number.
 * @n: The number, unsigned long int type.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int reversed;
	unsigned long int counter;

	reversed = 0;
	counter = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		reversed = reversed << 1;
		reversed += n & 1;
		counter++;
		n = n >> 1;
	}
	while (reversed > 0)
	{
		_putchar((reversed & 1) + '0');
		reversed = reversed >> 1;
		counter--;
	}
	if (counter > 0)
	{
		while (counter != 0)
		{
			_putchar('0');
			counter--;
		}
	}
}
