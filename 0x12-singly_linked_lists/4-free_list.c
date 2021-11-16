#include "lists.h"

/**
 *free_list - function that frees a  list.
 *@head: linked list
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(tmp->str);
		free(temp);
	}
}
