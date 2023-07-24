#include "main.h"

/**
* swap_int - returns 2 integers a and b
* And swaps their values
* @a: first integer being returned
* @b: second integer being returned
* Return: a, b
*/

void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
