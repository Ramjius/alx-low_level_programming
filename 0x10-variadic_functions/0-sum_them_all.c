#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function to calculate sum of numbers provided
* @n: no. of args passed to function
* @...: various arguments
* Return: sum of parameters or 0 if n == 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 9; j < n; j++)
	{
		sum += va_arg(ap, int)
	}

	va_end(ap);

	return (sum);
}
