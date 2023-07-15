#include <stdio.h>

/**
* main - outputs a-z
* Return: Always 0
*
*/

int main(void)

{
	char low, e, q;

	e = 101;
	q = 113;

	for (low = 97 ; low <= 122; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);
}
