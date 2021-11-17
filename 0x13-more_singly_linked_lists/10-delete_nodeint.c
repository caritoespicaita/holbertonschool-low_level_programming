#include "lists.h"

/**
 *  delete_nodeint_at_index - delete selected node
 * @head: list linked singly
 * @index: node to delete
 * Return: (1) success.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *delete = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (; i < (index - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (-1);
		}
	}
	delete = temp->next;
	temp->next = delete->next;
	free(delete);
	return (1);
}