#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @n: data to insert to front_node
* @head: pointer to first node
*
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *front_node;

	front_node = malloc(sizeof(listint_t));
	if (!front_node)
		return (NULL);

	front_node->n = n;
	front_node->next = *head;
	*head = front_node;

	return (front_node);
}
