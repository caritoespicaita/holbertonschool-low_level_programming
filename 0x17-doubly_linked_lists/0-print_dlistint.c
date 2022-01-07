#include "lists.h"
/**
 *print_list:-function print linked list
 *@h: linked list
 * Return: long linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);


}
