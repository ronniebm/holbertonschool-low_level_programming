#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: arguments counter.
 * @argv: argument array.
 * Return: arguments passed into it.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
exit(EXIT_SUCCESS);
}
