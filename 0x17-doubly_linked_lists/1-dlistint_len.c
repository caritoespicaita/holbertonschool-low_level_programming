#include "lists.h"

/**
 *dlistint_len - number of elements in a double linked list
 *@h: linked list
 *Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}