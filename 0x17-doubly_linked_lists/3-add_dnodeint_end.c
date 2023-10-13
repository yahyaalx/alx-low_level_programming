#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of a list
 * @head: head of ll
 * @n: value to add in node
 * Return: fail null , or pointer to node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list;
	dlistint_t *last;

	list = malloc(sizeof(dlistint_t));
	if (!list)
		return (NULL);
	list->n = n;
	list->next = NULL;
	if (!*head)
	{
		list->prev = NULL;
		*head = list;
		return (list);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = list;
	list->prev = last;

	return (list);
}
