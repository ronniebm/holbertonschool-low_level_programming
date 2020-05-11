#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: a pointer to a string.
 * @n: number of integers to be passed.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list parameters;

	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(parameters, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(parameters);
}
