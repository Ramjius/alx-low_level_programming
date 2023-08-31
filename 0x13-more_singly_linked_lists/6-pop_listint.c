#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: head node's data n or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int h_node;

	if (!head || !*head)
		return (0);

	h_node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (h_node);
}
