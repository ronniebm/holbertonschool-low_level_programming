#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - it adds a & b
 * @a: first value
 * @b: second value
 *
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract b from a
 * @a: first value
 * @b: second value
 *
 * Return: the difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - it multiplies a & b
 * @a: first value
 * @b: second value
 *
 * Return: the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first value
 * @b: second value
 *
 * Return: integer of division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find remainder of a divided by b
 * @a: first value
 * @b: second value
 *
 * Return: the remainder.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
