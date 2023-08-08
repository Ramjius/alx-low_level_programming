#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - check - if in string there are digit
* @str: array str
*
* Return: Always 0 for success
*/

int check_num(char *str)
{
	/* Declaring Variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* count string */
	{
		if (!isdigit(str[count])) /*check for digit in string*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
* main - prints the program name
* @argc: number of args
* @argv: arguments
* Return: always 0
*/

int main(int argc, char *argv[])
{
	/*Declaring Variables*/
	int count;
	int string_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
		str_to_int = _atoi(argv[count]);
		sum += str_to_int;
		}
		/*check for symbols*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}
	printf("%d\n", sum);

	return (0);
}
