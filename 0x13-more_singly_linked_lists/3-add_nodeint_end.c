#include "lists.h"

/**
 *add_nodeint_end - function that adds a new node at the
 *end of a list_t list.
 *@head: linked list
 *@n: string
 *Return: addres of element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *temp = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
