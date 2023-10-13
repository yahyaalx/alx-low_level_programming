#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a  node at idx position
 * @h: head of list
 * @idx: index node
 * @n: value of node
 * Return: pointer to node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *list;
	dlistint_t *head;
	unsigned int i;

	list = NULL;
	if (idx == 0)
		list = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					list = add_dnodeint_end(h, n);
				else
				{
					list = malloc(sizeof(dlistint_t));
					if (list != NULL)
					{
						list->n = n;
						list->next = head->next;
						list->prev = head;
						head->next->prev = list;
						head->next = list;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (list);
}

