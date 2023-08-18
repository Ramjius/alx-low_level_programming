#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints name
* @name: pointer to variable
* @f: pointer to function taking char pointer as argument
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	f(name);
	}
	else
	{
	return;
	}
}
