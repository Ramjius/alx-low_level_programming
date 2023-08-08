#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/**
* main - prints the sum of integer arguments
* @argc: number of args
* @argv: arguments
* Return: always 0
*/

int main(int argc, char *argv[])
{
	/*Declaring Variables*/
	int sum = 0;
	int x;
	int y;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
