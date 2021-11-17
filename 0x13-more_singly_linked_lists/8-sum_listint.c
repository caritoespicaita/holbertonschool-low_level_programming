#include "lists.h"

/**
 *sum_listint -  returns the sum of all the data (n) of a linked list
 *@head: linked list
 *Return: 0 if linked list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
