#include <stdio.h>
#include "main.h"

/**
* main - prints arguments followed by new line
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0
*/

int main(int argc,  char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
