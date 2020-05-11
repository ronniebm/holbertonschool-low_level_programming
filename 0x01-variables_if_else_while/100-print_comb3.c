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

for (b = '0'; b <= '9' ; b++)
{
for (s = '0'; s <= '9'; s++)
{
if (s > b)
{
putchar(b);
putchar(s);
if (b == '8' && s == '9')
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
return (0);
}
