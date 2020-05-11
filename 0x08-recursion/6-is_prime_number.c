#include "holberton.h"

/**
* isPrime - the function find a prime number.
* @n: integer number to check.
* @i: integer number to iterate.
*
* Return: i.
*/
int isPrime(int n, int i)
{

if (n < 2)
return (0);

if (i + 1 ==  n)
return (1);

else if (n % i == 0)
return (0);

else
return (isPrime(n, i + 1));

}

/**
* is_prime_number - checks if a number is prime or not
* @n: number to check
*
* Return: 0 if not prime, 1 if prime
*/

int is_prime_number(int n)
{
return (isPrime(n, 2));
}
