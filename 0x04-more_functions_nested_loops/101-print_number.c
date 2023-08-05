#include "main.h"

/**
* print_positive_number - prints positive integer
* @n: input
* Return: void
*/

void print_positive_number(int n)
{
	if (n == 0)
	return;
	print_positive_number(n / 10);
	_putchar('0' + (n % 10));
}

/**
* print_number - prints a 0 or -ve integer
* @n: input
* Return: void
*/

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
		else if (n < 0)
		{
			_putchar('-');
			print_positive_number(-n);
		}
		else
		{
			print_positive_number(n);
		}
}
