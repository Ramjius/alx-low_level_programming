#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - adds two numbers
* @a: number 1
* @b: number 2
*
* Return: sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - difference between two numbers
* @a: number 1
* @b: number 2
*
* Return: value of subtracting b from a
*/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul - multiplies two numbers
* @a: number 1
* @b: number 2
*
* Return: multiplies a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides two numbers
* @a: number 1
* @b: number 2
*
* Return: result of dividing a by b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - gives modulo of two numbers
* @a: number 1
* @b: number 2
*
* Return: remainder of a divided by b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
