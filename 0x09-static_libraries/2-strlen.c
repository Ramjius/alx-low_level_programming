#include "main.h"

/**
* _strlen - returns string length
* @s: the string
* Return: integer
*/

int _strlen(char *s)
{
	int str_length = 0;

	while (*s != '\0')
	{
		str_length++;
		s++;
	}
	return (str_length);
}
