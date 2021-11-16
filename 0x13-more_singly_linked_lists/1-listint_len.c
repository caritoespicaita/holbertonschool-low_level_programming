#include "lists.h"

/**
 *listint_len - number of elements in a linked list
 *@h: linked list
 *Return: len
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != 0)
	{
		len++;
		h = h->next;
	}
	return (len);
}