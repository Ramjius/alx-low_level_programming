#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - iterates through array performing action on each element
* @size: size of array
* @array: array to be iterated
* @action: execute on each element of array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
