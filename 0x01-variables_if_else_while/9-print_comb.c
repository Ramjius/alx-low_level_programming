#include <stdio.h>

/**
 * main - print numbers possible combinations
 * Return: Always 0
 */
int main(void)
{
	/* Define temporary variables */
	int n;

	/* For loop to generate characters*/
	for (n = 48; n <= 57; n++)
	{
	/* Display result digits*/
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
