#include "main.h"

/**
* print_diagonal - function prints a line on screen
* Return: void
* @n: input
*/

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x ; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
