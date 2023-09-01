#include "main.h"

/**
 * set_bit - set a bit to 1 at index
 * @n: pointer to number
 * @index: index
 * Return: 1 on succes -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index > 63)
		return (-1);

	tmp = 1 << index;
	*n = (*n | tmp);

	return (1);
}
