#include <stdio.h>

/**
 * main - print numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	/* Define temporary variables */
	int n;
	int m;

	/* For loop to generate characters*/
	for (n = 48; n <= 57; n++)
	{
	/* Display result digits*/
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
	/* Display result alphabets*/
		putchar(m);
	}
	putchar('\n');
	return (0);
}
