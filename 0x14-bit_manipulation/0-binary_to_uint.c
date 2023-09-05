#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string containing binary number
*
* Return: converted unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimal = 2 * decimal + (b[x] - '0');
	}
	return (decimal);
}
