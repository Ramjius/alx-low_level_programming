#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings and new line
* @separator: separates printed strings
* @n: number of strings to passed to function
* @...: variety of strings to be printed
*
* Description: Prints (nil) if one of the strings is NULL
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list rope;
	char *mystr;
	unsigned int i;

	va_start(rope, n);

	for (i = 0; i < n; i++)
	{
		mystr = va_arg(rope, char *);

		if (mystr == NULL)
			printf("nil");
		else
			printf("%s", mystr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(rope);
}
