#include "main.h"

/**
 * flip_bits -  returns the number of bits you would
 * need to flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int operation = n ^ m;
	unsigned int i = 0;

	while (operation)
	{
		i += (operation & 1);
		operation >>= 1;
	}
	return (i);
}
