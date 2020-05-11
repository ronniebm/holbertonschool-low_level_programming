#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 *@a: 2d array
 *
 * Return: void;
 */

void print_chessboard(char (*a)[8])
{
int	i, j;

i = 0;
while (i < (int) sizeof(a))
{
j = 0;
while (j < 8)
{
printf("%c", a[i][j]);
j++;
}
printf("\n");
i++;
}
}
