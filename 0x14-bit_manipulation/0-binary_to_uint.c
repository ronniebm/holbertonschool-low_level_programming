#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string.
 * Return: decimal conversion.
 */
unsigned int binary_to_uint(const char *b)
{
	int counter = 0;
	int i = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[counter] != '\0')
	{
		if (b[counter] == '1' || b[counter] == '0')
			counter++;
		else
			return (0);
	}
	while (i < counter)
	{
		sum = sum << 1;
		if (b[i] == '1')
			sum += 1;
		i++;
	}
	return (sum);
}
