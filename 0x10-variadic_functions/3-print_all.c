#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_c(va_list parameters, char *separator);
void print_i(va_list parameters, char *separator);
void print_f(va_list parameters, char *separator);
void print_s(va_list parameters, char *separator);

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list parameters;
	char *separator = "";
	int i = 0;
	int j = 0;
	wrapper rules[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
		};
	va_start(parameters, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *rules[j].character)
			{
				rules[j].ptrfunc(parameters, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(parameters);
}

/**
 * print_c - a function that prints a character.
 * @parameters: argument passed to function.
 * @separator: string separator to be used.
 *
 * Return: nothing.
 */
void print_c(va_list parameters, char *separator)
{
	printf("%s%c", separator, va_arg(parameters, int));
}

/**
 * print_i - a function that prints an integer.
 * @parameters: argument passed to function.
 * @separator: string separator to be used.
 *
 * Return: nothing.
 */
void print_i(va_list parameters, char *separator)
{
	printf("%s%d", separator, va_arg(parameters, int));
}

/**
 * print_f - a function that prints a float.
 * @parameters: argument passed to function.
 * @separator: string separator to be used.
 *
 * Return: nothing.
 */
void print_f(va_list parameters, char *separator)
{
	printf("%s%f", separator, va_arg(parameters, double));
}

/**
 * print_s - a function that prints a string.
 * @parameters: argument passed to function.
 * @separator: string separator to be used.
 *
 * Return: nothing.
 */
void print_s(va_list parameters, char *separator)
{
	char *string;

	string = va_arg(parameters, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s%s", separator, string);
}
