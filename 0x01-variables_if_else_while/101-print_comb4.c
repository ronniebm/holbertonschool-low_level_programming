#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int b;
int s;
int z;

for (b = '0'; b <= '9'; b++)
{
for (s = '0'; s <= '9'; s++)
{
for (z = '0'; z <= '9'; z++)
{
if (z > s && s > b)
{
putchar(b);
putchar(s);
putchar(z);
if (b == '7' && s == '8' && z == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
