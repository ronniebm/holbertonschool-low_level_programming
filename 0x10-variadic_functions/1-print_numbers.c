#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: a pointer to a string.
 * @n: number of integers to be passed.
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int value, i;
	va_list parameters;

	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(parameters, int);
		printf("%d", value);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(parameters);
}
