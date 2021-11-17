#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node in idx position
 * @head: list linked
 * @n: date to add
 * @idx: position to insert
 * Return: (new node)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int count = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
	return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp != NULL && count < idx)
	{
		if (count == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
		count++;
	}
	return (NULL);
}
