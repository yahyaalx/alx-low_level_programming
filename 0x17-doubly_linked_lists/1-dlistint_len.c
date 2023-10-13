#include "lists.h"

/**
 * dlistint_len - return num of nodes in dl_list
 * @h: head of the list
 * Return: nodes counts
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
