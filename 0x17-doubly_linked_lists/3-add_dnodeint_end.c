#include "lists.h"
/**
 * add_dnodeint_end - Añade un nuevo nodo al final de la lista.
 * @head: doble puntero a la lista.
 * @n: contenido del nuevo nodo.
 * Return: Nuevo nodo
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			new->prev = NULL;
			*head = new;
			return (new);
		}

		while (temp->next)
		{
			temp = temp->next;
		}
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
