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
	for (n < 58)
	{
	/* Display result digits*/
		putchar(n);
		if (n != 57)
		putchar(',');
		putchar(' ');
		n++;
	}
	else
	{
	break;
	}
	putchar('\n');
	return (0);
}
