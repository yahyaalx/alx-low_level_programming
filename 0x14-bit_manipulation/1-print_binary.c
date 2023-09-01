#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int flag;
	unsigned long int mask;

	flag = 0;
	mask = 1;
	mask <<= 63;
	if (n == 0)
		write(1, "0", 1);

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 1)
			write(1, "0", 1);
		if ((n & mask) != 0)
		{
			write(1, "1", 1);
			flag = 1;
		}

		mask = mask >> 1;
	}
}
