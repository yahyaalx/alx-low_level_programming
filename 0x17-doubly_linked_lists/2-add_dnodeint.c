#include "lists.h"

/**
 * add_dnodeint - add a new node to head of ll
 * @head: head of list
 * @n: value to add as a new node
 * Return: pointer to head of new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list;

	if (!head)
		return (NULL);
	list = malloc(sizeof(dlistint_t));
	if (!list)
		return (NULL);
	list->n = n;
	list->prev = NULL;
	list->next = *head;
	if (*head)
		(*head)->prev = list;
	*head = list;
	return (list);
}

