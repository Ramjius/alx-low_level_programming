#include "main.h"

/**
* print_rev - reverse print
* @s: string being printed
* Return: 0 (Successful)
*/

void print_rev(char *s)
{
	int str_length = 0;
	int m;

	while (*s != '\0')
	{
		str_length++;
		s++;
	}
	s--;
	for (m = str_length; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
