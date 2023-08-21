#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of args passed to function
*/

void print_all(const char * const format, ...)
{
	int k = 0;
	char *mystr, *separator = "";

	va_list print_list;

	va_start(print_list, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", separator, va_arg(print_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(print_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(print_list, double));
					break;
				case 's':
					mystr = va_arg(print_list, char *);
					if (!mystr)
						mystr = "(nil)";
					printf("%s%s", separator, mystr);
					break;

				default:
					k++;
					continue;
			}

			separator = ",";
			k++;
		}
	}
	printf("\n");
	va_end(print_list);
}
