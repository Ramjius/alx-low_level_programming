#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* listint_len - shows the number of elements of linked list
* @h: pointer to next node
*
* Return: no. of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
