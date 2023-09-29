#include "main.h"

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: printed number in binary
*/

void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int status;

	for (j = 63; j >= 0; j--)
	{
		status = n >> j;

		if (status & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}