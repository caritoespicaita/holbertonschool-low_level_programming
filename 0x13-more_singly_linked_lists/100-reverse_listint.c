#include "lists.h"

/**
 * reverse_listint - function that reverses a linked lis.
 * @head: list linked singly
 * Return: node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *next = NULL;
	listint_t *temp2 = *head;

	while (temp2 != NULL)
	{
		next = temp2->next;
		temp2->next = temp;
		temp = temp2;
		temp2 = next;
	}
	return (*head = temp);
}
