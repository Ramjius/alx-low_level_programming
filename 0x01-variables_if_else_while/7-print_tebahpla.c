#include <stdio.h>

/**
 * main - prints a-z in reverse
 * Return: Always 0
 */
int main(void)
{
	/* Define temporary variables */
	char alpha = 122;

	/* For loop to generate z to a */
	for (; alpha > 96; alpha--)
	{
	/* Display result */
	putchar(alpha);
	}
	putchar('\n');

	return (0);
}
