#include "main.h"

/**
 * get_bit - returns the value of a bit at index
 * @n: number
 * @index: index
 * Return: vaalue of but at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (n == 0 && index < 64)
		return (0);

	while (i <= 63)
	{
		if (index == i)
		{
			return (n & 1);
		}
		n >>= 1;
		i++;
	}
	return (-1);
}
