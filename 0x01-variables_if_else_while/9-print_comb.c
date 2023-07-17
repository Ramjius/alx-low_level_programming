#include <stdio.h>

/**
 * main - print numbers possible combinations
 * Return: Always 0
 */
int main(void)
{
	/* Define temporary variables */
	int n = 48;

	/* For loop to generate characters*/
	for (; n < 58; n++)
	{
	putchar(n);

	/* For loop to add comma and space */
	if (n < 57)
	{
		putchar(',');
		putchar(' ');
	}

	}
	putchar('\n');
	return (0);
}
