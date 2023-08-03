#include "main.h"

/**
* _pow_recursion - calculates x to power y
* @x: number being raised to power y
* @y: base number raising power of x to y
* Return: integer
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
