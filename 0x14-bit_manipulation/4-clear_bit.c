#include "main.h"

/**
 * clear_bit - set a bit to 0 at index
 * @n: pointer to number
 * @index: index
 * Return: 1 on succes -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index > 63)
		return (-1);

	tmp = 1 << index;

	if (*n & tmp)
		*n ^= tmp;
	return (1);
}
