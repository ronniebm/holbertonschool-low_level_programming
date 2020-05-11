#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - executes basic operations.
 * @argc: number of arguments passed.
 * @argv: array of pointers to arguments passed.
 *
 * Return: return (0)
 */

int main(int argc, char *argv[])
{
	int val1, val2, out;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	out = f(val1, val2);
	printf("%d\n", out);
	return (0);
}
