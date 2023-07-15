#include <stdio.h>
#include <math.h>

/**
* main - pints base 10 using putchar
* Return: Always 0
*/
int main(void)
{
	/* Define temporary variables */
	int num;

	/* For loop to generate the value of range 0 to 10 */
	for (num = 48; num < 58; num++)
	{
	/* Display result */
	putchar(num);
	}
	putchar('\n');

	return (0);
}
