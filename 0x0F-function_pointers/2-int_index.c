#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - searches for integer in array
* @array: array
* @size: sizeof array
* @cmp: function pointer that checks for integer
* Return: 0 Success
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if ((array == NULL || cmp == NULL) || size <= 0)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) == 1)
			return (j);
	}
	return (-1);
}
