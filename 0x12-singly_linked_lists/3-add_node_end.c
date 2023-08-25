#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
* add_node_end - ...
* @head: ...
* @str: ...
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next)
		{
		current = current->next;
		}
		current->next = new_node;

	}

	return (new_node);

}
