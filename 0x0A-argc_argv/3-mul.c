#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers (passed by argument).
 * @argc: arguments counter.
 * @argv: argument array.
 * Return: multiplication of two numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

if (argv[2] != '\0' && argc == 3)
{
int n = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", n);
exit(EXIT_SUCCESS);
}

else
{
printf("Error\n");
return (1);
}

}
