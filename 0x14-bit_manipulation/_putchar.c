#include "main.h"
#include <unistd.g>

/**
* _putchar - writes the character c to stdout
* @c: chararcter to write
*
* Return: On success 1 on error -1
*
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
