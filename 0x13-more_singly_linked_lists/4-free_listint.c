#include "lists.h"

/**
 *free_list - function that frees a  list.
 *@head: linked list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}