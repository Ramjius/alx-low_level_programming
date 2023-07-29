#include <stdio.h>

/**
* find_largest_prime_factor - computes the largest prime factor
* @num: input
* Return: unsigned integer
*/

long int find_largest_prime_factor(long int num)
{
	long int largest_prime = 2;

	while (num > largest_prime)
	{
	if (num % largest_prime == 0)
	{
		num /= largest_prime;
	}
	else
	{
		largest_prime++;
		}
	}

	return (largest_prime);
}

/**
* main - finds the largest prime factor
* Return: 0 (success)
*/

int main(void)
{
	long int number = 612852475143;
	long int largest_prime_factor = find_largest_prime_factor(number);

	printf("%li\n", largest_prime_factor);
	return (0);
}
