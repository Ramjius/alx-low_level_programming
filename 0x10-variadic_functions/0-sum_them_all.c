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
	va_list values;
	unsigned int j, total = 0;

	va_start(values, n);

	for (j = 0; j < n; j++)
	{
		total += va_arg(values, int);
	}

	va_end(values);

	return (total);
}
