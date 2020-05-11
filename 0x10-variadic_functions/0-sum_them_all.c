#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters.
 *
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num, i;
	int value;
	va_list parameters;

	if (n > 0)
	{
		va_start(parameters, n);
		num = 0;
		for (i = 0; i < n; i++)
		{
			value = va_arg(parameters, unsigned int);
			num = (num + value);
		}
		va_end(parameters);
		return (num);
	}
	return (0);
}
