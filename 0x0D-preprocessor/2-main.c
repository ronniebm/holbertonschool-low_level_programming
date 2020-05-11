#include <stdio.h>
#ifndef __FILENAME__
#define __FILENAME__ (__FILE__)
#endif

/**
 * main - prints the name of the file it was compiled from.
 *
 * Return: void.
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
