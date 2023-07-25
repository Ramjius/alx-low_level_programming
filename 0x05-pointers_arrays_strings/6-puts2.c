#include "main.h"

/**
* puts2 - prints 1st out of 2
* @str: input
* return: print
*/

void puts2(char *str)
{
	int str_length = 0;
	int x = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		str_length++;
	}
	x = str_length - 1;

	for (i = 0; i <= x; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
