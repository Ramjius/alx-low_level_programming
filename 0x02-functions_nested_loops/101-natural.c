
#include <stdio.h>

/**
* main - prints sum of all multiples of 3 or 5 upto 1024
* Return: 0 Always (Success)
*/

int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
	i++;
	}
	printf("%d\n", j);
	return (0);
}
