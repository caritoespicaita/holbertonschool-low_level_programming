#include "lists.h"
/**
 *add_nodeint - function that adds a new node at the
 *beginning of a list_t list.
 *@head:linked list
 *@n: linked list
 * Return: long linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
