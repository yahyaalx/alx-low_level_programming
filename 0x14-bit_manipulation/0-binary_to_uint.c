#include "main.h"
/**
 * binary_to_uint - converts a given binary to an unsigned int
 * @b: the binary charachters
 * Return: 0 or unsigned number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i;
	int len;

	n = 0;
	i = 0;
	len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	while (i != len)
	{
		if (b[len - i - 1] == '1')
		{
			n += 1 << i;
		}
		else if (b[len - i - 1] != '0')
		{
			return (0);
		}
		i++;
	}
	return (n);
}
