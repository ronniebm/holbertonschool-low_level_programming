#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *_strcpy - a function to copy a string
 * @dest: a char string type.
 * @src: a char string type.
 * Return: it returns a pointer to "dest".
 */

char *_strcpy(char *dest, char *src)
{
int x;
int c = 0;

while (src[c] != '\0')
{
c++;
}
for (x = 0; x < c; x++)
{
dest[x] = src[x];
}
dest[c] = '\0';
return (dest);
}

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

/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: dog's owner.
 * Return: an adress to the new dog data.
 */

struct dog *new_dog(char *name, float age, char *owner)
{
dog_t *user;
int lenght_name, lenght_owner;

user = malloc(sizeof(dog_t));
if (user == NULL)
	return (NULL);
lenght_name = _strlen(name);
lenght_owner = _strlen(owner);
user->name = malloc(sizeof(char) * (lenght_name + 1));
if (user->name == NULL)
{
	free(user);
	return (NULL);
}
user->name = _strcpy(user->name, name);
user->age = age;
user->owner = malloc(sizeof(char) * (lenght_owner + 1));
if (user->owner == NULL)
{
	free(user->name);
	free(user);
	return (NULL);
}
user->owner = _strcpy(user->owner, owner);
return (user);
}
