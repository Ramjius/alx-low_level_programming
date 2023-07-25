#include "main.h"
/**
* _puts - prints string followed by newline to stdout
* @str: printed string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
