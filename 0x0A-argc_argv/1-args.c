#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: arguments counter.
 * @argv: argument array.
 * Return: arguments passed into it.
 */

int main(int argc, char **argv)
{
if (argv[1] == '\0')
printf("%d\n", 0);
else
printf("%d\n", argc - 1);
exit(EXIT_SUCCESS);
}
