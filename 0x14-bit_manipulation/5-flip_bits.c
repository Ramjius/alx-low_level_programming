#include "main.h"

/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, bitnum = 0;
	unsigned long int status;
	unsigned long int bit_diff = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		status = bit_diff >> a;
		if (status & 1)
			bitnum++;
	}

	return (bitnum);
}