#include "function_pointers.h"

/**
* print_name - prints name
* @name: pointer to variable
* @f: pointer to function taking char pointer as argument
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	f(name);
}
