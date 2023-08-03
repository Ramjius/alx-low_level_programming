#include "main.h"
#include <stdio.h>

int prime(int n, int i);

/**
* is_prime_number - returns prime number
* @n: input
* Return: integer
*/

int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
* prime - checks for prime number
* @n: input
* @i: iterative variable
* Return: 1 for prime and 0 for composite
*/

int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (prime(n, i + 1));
}
