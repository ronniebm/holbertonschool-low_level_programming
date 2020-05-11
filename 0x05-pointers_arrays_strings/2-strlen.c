#include "holberton.h"

/**
 * _strlen - returns the lenght of a string.
 * @s: pointer to the string variable address.
 * Return: return a lengh.
 */

int _strlen(char *s)
{
int contador = 0;
while (*s != '\0')
{
contador++;
s++;
}
return (contador);
}
