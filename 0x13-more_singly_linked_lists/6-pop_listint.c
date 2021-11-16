#include "lists.h"

/**
 *pop_listint-that deletes the head node of a linked list
 *@head: linked list
 *Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *nodo = NULL;
	int n;

	if (!h)
		return (0);
	nodo = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nodo;
	return (n);
}
