#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: arguments counter.
 * @argv: argument array.
 * Return: prints the program name.
 */

int main(int argc, char **argv)
{
printf("%s\n", argv[argc - 1]);
exit(EXIT_SUCCESS);
}
