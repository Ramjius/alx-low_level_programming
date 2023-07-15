#include <stdio.h>

/**
* main - outputs a-z
* Return: Always 0
*
*/

int main(void)

{
	char i = 97;
	char k = 65;

	for (; i < 123; i++)
	{
	putchar(i);
	}

	for (; k < 91; k++)
	{
	putchar(k);
	}
	putchar('\n');
	return (0);
}
