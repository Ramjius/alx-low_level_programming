#include "main.h"
#include <stdio.h>

/**
* main - prints 1 - 100 with multipls of
* 3 as Fizz, 5 as Buzz and both as FizzBuzz
* Return: 0 Success
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ((i % 3 == 0) && (i % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", i);
	}
	if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
