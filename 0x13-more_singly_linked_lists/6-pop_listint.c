#include "lists.h"




int pop_listint(listint_t **head)
{
    listint_t *nodo = NULL;
    int n;

    nodo = (*head)->next;
    n = (*head)->n;
    free (*head);
    *head = nodo;
    return (n);
}