#include <stdio.h>
#include "main.h"

/**
* main - print no. of args passed to program
* @argc: number of argumnts
* @argv: array of cli arguments
* Return: 0 Always
*/

int main(int argc, char *argv[])
{
	(void) argv; /* Ignore argv */
		printf("%d\n", argc - 1);

		return (0);
}
