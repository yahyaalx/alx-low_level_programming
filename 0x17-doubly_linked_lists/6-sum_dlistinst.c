#include "lists.h"
/**
 *sum_dlistint - sums values of all nodes of the doubly linked list
 *@head: head of d ll
 *Return: the sum of the nodes of the d ll
 */
int sum_dlistint(dlistint_t *head)
{
	int i;
	i = 0;

	if (head == NULL)
		return (i);
	while (head)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
