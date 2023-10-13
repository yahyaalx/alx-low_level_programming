#include "lists.h"

/**
 * print_dlistint - print the elements of a linked list
 *
 * @h: head of the list
 * Return: nodes count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
