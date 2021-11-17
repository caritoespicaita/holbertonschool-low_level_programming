#include "lists.h"

/**
 *get_nodeint_at_index - that deletes the head node of a linked list
 *@head: linked list
 *@index: index of the node
 *Return: 0 if linked list is empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (node != NULL)
	{
		if (count == index)
			return (head);

		node = node->next;
		head = node;
		count++;
	}
	return (node);
}
